/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/#include <stdio.h>

int main()
{

    int matrix[3][3];
    int i, j;

    printf("Enter 9 numbers for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element for row %d, column %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour 3x3 Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day36.out
Enter 9 numbers for a 3x3 matrix:
Enter element for row 0, column 0: 2 3 4
Enter element for row 0, column 1: Enter element for row 0, column 2: Enter element for row 1, column 0: 5 6 7
Enter element for row 1, column 1: Enter element for row 1, column 2: Enter element for row 2, column 0: 2 9 9
Enter element for row 2, column 1: Enter element for row 2, column 2:
Your 3x3 Matrix is:
2       3       4
5       6       7
2       9       9
*/