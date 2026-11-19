/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{

    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows];

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
        int sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }

        rowSums[i] = sum;
    }

    printf("\n--- Results ---\n");
    for (int i = 0; i < rows; i++)
    {
        printf("Sum of Row %d = %d\n", i, rowSums[i]);
    }

    return 0;
}
/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day37.out
Enter the number of rows: 2
Enter the number of columns: 1

Enter the elements of the matrix:
Element [0][0]: 2 3
Element [1][0]:
--- Results ---
Sum of Row 0 = 2
Sum of Row 1 = 3
*/