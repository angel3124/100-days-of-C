/*Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/#include <stdio.h>

int main()
{
    int n, i, j;
    int isDistinct = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][i]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (mat[i][i] == mat[j][j])
            {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
        {
            break;
        }
    }

    if (isDistinct)
    {
        printf("All elements on the main diagonal are distinct.\n");
    }
    else
    {
        printf("The main diagonal elements are NOT distinct.\n");
    }

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day39.out
Enter the size of the square matrix (n x n): 2 2
Enter the elements of the matrix:
2 3
3 4
The main diagonal elements are NOT distinct
*/