/*Q74: Find the transpose of a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[10][10];
    int transpose[10][10];

    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day37.out
Enter number of rows: 2
Enter number of columns: 3

Enter elements of the matrix:
Enter element at [0][0]: 2 4
Enter element at [0][1]: Enter element at [0][2]: 2 4 5
Enter element at [1][0]: Enter element at [1][1]: Enter element at [1][2]: 2 6 7

Original Matrix:
2       4       2
4       5       2

Transposed Matrix:
2       4
4       5
2       2*/