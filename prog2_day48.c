/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[200] = "Hello World from VS Code";

    printf("Original: %s\n", str);

    char *word_start = str;
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
            reverseWord(word_start, ptr - 1);
            word_start = ptr + 1;
        }
        ptr++;
    }
    reverseWord(word_start, ptr - 1);

    printf("Reversed: %s\n", str);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day48.out
Original: Hello World from VS Code
Reversed: olleH dlroW morf SV edoC
*/