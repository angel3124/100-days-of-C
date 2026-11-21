/*Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcd";
    int length = strlen(str);

    printf("All possible substrings of '%s':\n", str);

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
/*

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day50.out
All possible substrings of 'abcd':
a
ab
abc
abcd
b
bc
bcd
c
cd
d
*/