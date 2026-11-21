/*Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Uppercase string: %s\n", str);

    return 0;
}

/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day42.out
Enter a string in lowercase: hello
Uppercase string: HELLO
*/