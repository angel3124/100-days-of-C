/*Q75: Add two matrices.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main()
{

    int first[2][2], second[2][2], sum[2][2];
    int i, j;

    printf("Enter 4 numbers for the FIRST matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("\nEnter 4 numbers for the SECOND matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("\nThe SUM of the two matrices is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day38.out
Enter 4 numbers for the FIRST matrix:
Element [0][0]: 2 2
Element [0][1]: Element [1][0]: 4 4
Element [1][1]:
Enter 4 numbers for the SECOND matrix:
Element [0][0]: 5 5
Element [0][1]: Element [1][0]: 2 4
Element [1][1]:
The SUM of the two matrices is:
7       7
6       8
*/