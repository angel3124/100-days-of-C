/*Q90: Toggle case of each character in a string.

Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("Toggled string: %s\n", str);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day45.out
Enter a string: heLlo
Toggled string: HElLO
*/
