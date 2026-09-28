/*Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main()
{
    char str[100];
    char searchChar;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &searchChar);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == searchChar)
        {
            count++;
        }
    }
    printf("The character '%c' appears %d time(s) in the string.\n", searchChar, count);

    return 0;
}
/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day45.out
Enter a string: hello
Enter a character to find its frequency: h
The character 'h' appears 1 time(s) in the string.
*/