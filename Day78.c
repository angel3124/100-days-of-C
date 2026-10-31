/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char ch;
    int vowels = 0;
    int consonants = 0;

    file = fopen("info.txt", "r");

    if (file == NULL)
    {
        printf("Error: Could not open file. Make sure 'info.txt' exists.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF)
    {
        ch = tolower(ch);

        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    fclose(file);

    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day78.out
Total Vowels: 34
Total Consonants: 59
*/