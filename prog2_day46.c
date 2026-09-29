/*Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a lowercase string: ");
    scanf("%s", str);

    int len = strlen(str);
    char first_duplicate = '\0';

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                first_duplicate = str[i];
                break;
            }
        }
        if (first_duplicate != '\0')
        {
            break;
        }
    }
    if (first_duplicate != '\0')
    {
        printf("The first repeating character is: %c\n", first_duplicate);
    }
    else
    {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day46.out
Enter a lowercase string: stress
The first repeating character is: s
*/