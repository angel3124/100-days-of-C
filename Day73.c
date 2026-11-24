/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char filename[100];
    long characters = 0;
    long words = 0;
    long lines = 0;
    int inWord = 0;
    int ch;

    printf("Enter the file name to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("Error: The file '%s' does not exist or could not be opened.\n", filename);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
        {
            lines++;
        }
        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }
    if (characters > 0 && lines == 0)
    {
        lines = 1;
    }
    fclose(file);

    printf("--- File Statistics ---\n");
    printf("Total Characters : %ld\n", characters);
    printf("Total Words      : %ld\n", words);
    printf("Total Lines      : %ld\n", lines);

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