/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the size of the square matrix (e.g., 3 for 3x3): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    printf("\nThe sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day39.out
Enter the size of the square matrix (e.g., 3 for 3x3): 3
Enter the elements of the matrix:
Element [0][0]: 1 2 3
Element [0][1]: Element [0][2]: Element [1][0]: 4 5 6
Element [1][1]: Element [1][2]: Element [2][0]: 7 8 9
Element [2][1]: Element [2][2]:
The sum of the main diagonal elements is: 15*/