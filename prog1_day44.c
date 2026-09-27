/*Q87: Count spaces, digits, and special characters in a string.

Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

int main()
{
    char str[100];

    int spaces = 0;
    int digits = 0;
    int alphabets = 0;
    int specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (str[i] != '\n')
        {
            specialChars++;
        }
    }

    printf("\n--- Results ---\n");
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Alphabets: %d\n", alphabets);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}

/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day44.out
Enter a string: a bi&2

--- Results ---
Spaces: 1
Digits: 1
Alphabets: 3
Special Characters: 1
*/