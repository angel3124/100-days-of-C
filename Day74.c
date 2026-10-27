/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source_name[100], dest_name[100];
    FILE *source_file, *dest_file;
    char ch;

    printf("Enter the name of the source file to copy from: ");
    scanf("%99s", source_name);

    source_file = fopen(source_name, "r");
    if (source_file == NULL)
    {
        printf("Error: Could not open source file %s. Make sure it exists!\n", source_name);
        return 1;
    }
    printf("Enter the name of the destination file to create/write to: ");
    scanf("%99s", dest_name);

    dest_file = fopen(dest_name, "w");
    if (dest_file == NULL)
    {
        printf("Error: Could not create or open destination file %s.\n", dest_name);
        fclose(source_file);
        return 1;
    }
    while ((ch = fgetc(source_file)) != EOF)
    {
        fputc(ch, dest_file);
    }
    printf("File copied successfully from %s to %s!\n", source_name, dest_name);

    fclose(source_file);
    fclose(dest_file);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day73.out
Enter the file name to read: info.txt
--- File Statistics ---
Total Characters : 104
Total Words      : 21
Total Lines      : 3
*/