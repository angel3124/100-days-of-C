/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{
    int total_rows = 7;
    int row, space, star;

    for (row = 1; row <= 4; row++)
    {

        for (space = 1; space <= 4 - row; space++)
        {
            printf(" ");
        }

        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (row = 3; row >= 1; row--)
    {

        for (space = 1; space <= 4 - row; space++)
        {
            printf(" ");
        }

        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day27.out
   *
  ***
 *****
*******
 *****
  ***
   *
*/