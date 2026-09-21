/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/#include <stdio.h>

int main()
{
    int rows, cols;
    int isSymmetric = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols)
    {
        printf("The matrix is NOT symmetric because it is not a square matrix.\n");
        return 0;
    }

    int matrix[rows][cols];

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

            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0)
        {
            break;
        }
    }

    printf("\n--- Result ---\n");
    if (isSymmetric == 1)
    {
        printf("The matrix is Symmetric!\n");
    }
    else
    {
        printf("The matrix is NOT Symmetric.\n");
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day38.out
Enter number of rows: 2
Enter number of columns: 2

Enter elements of the matrix:
Enter element at [0][0]: 2 2
Enter element at [0][1]: Enter element at [1][0]: 1 2
Enter element at [1][1]:
--- Result ---
The matrix is NOT Symmetric.
*/