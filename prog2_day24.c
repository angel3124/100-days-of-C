/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345


Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day24.c -o prog2_day24.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day24.out
1
12
123
1234
12345
*/
