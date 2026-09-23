/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/#include <stdio.h>

int main()
{

    int r1 = 2, c1 = 3;
    int r2 = 3, c2 = 2;

    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int b[3][2] = {
        {7, 8},
        {9, 1},
        {2, 3}};

    int result[2][2];

    if (c1 != r2)
    {
        printf("Error! Matrices cannot be multiplied.\n");
        return 1;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day40.out
Resultant Matrix:
31      19
85      55
*/