/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1)
    {
        printf("\"%s\" is a palindrome.\n", str);
    }
    else
    {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day43.out
Enter a string: madam
"madam" is a palindrome.
*/