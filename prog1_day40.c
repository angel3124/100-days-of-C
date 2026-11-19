/*Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/#include <stdio.h>

#define ROWS 3
#define COLS 3

void findDiagonalOrder(int matrix[ROWS][COLS], int m, int n)
{
    int row = 0, col = 0;
    int up = 1;

    for (int k = 0; k < m * n; k++)
    {
        printf("%d ", matrix[row][col]);

        if (up)
        {

            if (col == n - 1)
            {
                row++;
                up = 0;
            }
            else if (row == 0)
            {
                col++;
                up = 0;
            }
            else
            {
                row--;
                col++;
            }
        }
        else
        {

            if (row == m - 1)
            {
                col++;
                up = 1;
            }
            else if (col == 0)
            {
                row++;
                up = 1;
            }
            else
            {
                row++;
                col--;
            }
        }
    }
    printf("\n");
}

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Diagonal Traversal Output:\n");
    findDiagonalOrder(matrix, ROWS, COLS);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day40.out
Diagonal Traversal Output:
1 2 4 7 5 3 6 8 9
*/