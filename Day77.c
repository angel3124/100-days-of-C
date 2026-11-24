/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *inputFile, *outputFile;
    char ch;

    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL)
    {
        printf("Error: Could not open input.txt. Make sure the file exists.\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL)
    {
        printf("Error: Could not create or open output.txt.\n");
        fclose(inputFile);

        return 1;
    }
    while ((ch = fgetc(inputFile)) != EOF)
    {
        ch = toupper(ch);

        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);

    printf("Success: Text successfully converted and written to output.txt\n");

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day77.out
Success: Text successfully converted and written to output.txt
*/