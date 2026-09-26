/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day43.out
Enter a string: abcd
Reversed string: dcba
*/