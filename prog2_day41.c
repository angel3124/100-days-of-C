/*Q82: Print each character of a string on a new line.

Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/#include <stdio.h>

int main()
{
    char myString[] = "Hello";

    for (int i = 0; myString[i] != '\0'; i++)
    {
        printf("%c\n", myString[i]);
    }
    return 0;
}

/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day41.out
H
e
l
l
o
*/