/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    int i, last_space = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; i < (int)strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            last_space = i;
        }
    }
    if (last_space == -1)
    {
        printf("%s\n", name);
        return 0;
    }
    printf("%c.", toupper(name[0]));

    for (i = 0; i < last_space; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {
            printf(" %c.", toupper(name[i + 1]));
        }
    }
    printf(" %s\n", &name[last_space + 1]);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day49.out
Enter your full name: Angel garg
A. garg
*/