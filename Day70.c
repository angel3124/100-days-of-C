/*Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *sourceFile = fopen("input.txt", "r");

    if (sourceFile == NULL)
    {
        printf("'input.txt' not found. Creating a new one with sample text...\n");

        FILE *newFileInput = fopen("input.txt", "w");
        if (newFileInput == NULL)
        {
            printf("Error: Could not create the input file.\n");
            return 1;
        }
        fprintf(newFileInput, "WELCOME TO FILE HANDLING. THIS FILE WAS CREATED AUTOMATICALLY! IS IT WORKING?");
        fclose(newFileInput);

        sourceFile = fopen("input.txt", "r");
    }
    FILE *destFile = fopen("output.txt", "w");
    if (destFile == NULL)
    {
        printf("Error: Could not create output.txt\n");
        fclose(sourceFile);
        return 1;
    }
    int ch;
    int newSentence = 1;

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        if (newSentence && isalpha(ch))
        {
            fputc(toupper(ch), destFile);
            newSentence = 0;
        }
        else if (isalpha(ch))
        {
            fputc(tolower(ch), destFile);
        }
        else
        {
            fputc(ch, destFile);
            if (ch == '.' || ch == '?' || ch == '!')
            {
                newSentence = 1;
            }
        }
    }
    fclose(sourceFile);
    fclose(destFile);

    printf("Success! Created 'input.txt', processed it, and saved the Sentence Case output to 'output.txt'.\n");
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day70.out
Success! Created 'input.txt', processed it, and saved the Sentence Case output to 'output.txt'.
*/