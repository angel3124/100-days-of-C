/*Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[] = "John Fitzgerald Kennedy";

    printf("The initials are: ");

    if (name[0] != '\0')
    {
        printf("%c", toupper(name[0]));
    }
    for (int i = 1; name[i] != '\0'; i++)
    {
        if (name[i - 1] == ' ' && name[i] != ' ')
        {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day49.out
The initials are: JFK
*/