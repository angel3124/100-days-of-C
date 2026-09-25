/*Q83: Count vowels and consonants in a string.


Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[150];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

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
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day42.out
Enter a string: hello
Total Vowels: 2
Total Consonants: 3
*/