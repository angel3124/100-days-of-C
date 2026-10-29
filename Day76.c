/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; 
otherwise, read and display its content.

Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];
    FILE *filePointer;
    char ch;

    printf("Enter the filename to open (e.g., test.txt): ");
    scanf("%99s", filename);

    filePointer = fopen(filename, "r");

    if (filePointer == NULL)
    {
        printf("Error: Could not open file '%s'. Make sure the file exists.\n", filename);
        return 1;
    }
    printf("\n--- File Content Start ---\n");
    while ((ch = fgetc(filePointer)) != EOF)
    {
        putchar(ch);
    }
    printf("\n--- File Content End ---\n");

    fclose(filePointer);

    return 0;
}
/*C:\Users\WELCOME\OneDrive\Desktop\C_file>Day76.out
Enter the filename to open (e.g., test.txt): info.txt

--- File Content Start ---
Hello! This is my first file.
I am learning file handling in C.
This file is created using a C program.
this is appended

--- File Content End ---
*/