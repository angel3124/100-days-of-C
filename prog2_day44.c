/*Q88: Replace spaces with hyphens in a string.

Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main()
{
    char str[100] = "Hello world from VS Code";

    printf("Original string: %s\n", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }
    printf("Updated string:  %s\n", str);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day44.out
Original string: Hello world from VS Code
Updated string:  Hello-world-from-VS-Code
*/