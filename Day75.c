/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting 
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day76.out
Enter the filename to open (e.g., test.txt): info.txt
existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer;
    char userBuffer[256];

    filePointer = fopen("info.txt", "a");

    if (filePointer == NULL)
    {
        printf("Error: Could not open or create the file.\n");
        return 1;
    }
    printf("Enter the line of text you want to append: ");

    fgets(userBuffer, sizeof(userBuffer), stdin);
    fprintf(filePointer, "%s", userBuffer);
    fclose(filePointer);

    printf("Success! Your text has been appended to info.txt without overwriting.\n");
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day75.out
Enter the line of text you want to append: this is appended
Success! Your text has been appended to info.txt without overwriting.
*/