/*Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/#include <stdio.h>

int main()
{

    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int sum = 0;

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
/*

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day36.out
Enter the number of rows: 2
Enter the number of columns: 3

Enter the elements of the matrix:
Element [0][0]: 2 3
Element [0][1]: Element [0][2]: 2 5 6
Element [1][0]: Element [1][1]: Element [1][2]: 2 1 3

The sum of all elements in the matrix is: 20*/