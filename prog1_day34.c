/*Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main()
{
    int arr[100], n, i, pos, val;

    printf("Enter number of elements in array (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1 to %d) where you want to insert: ", n + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &val);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position! Please try again.\n");
        return 0;
    }

    for (i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = val;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day34.out
Enter number of elements in array (max 100): 4
Enter 4 elements:
10 20 30 40
Enter the position (1 to 5) where you want to insert: 2
Enter the value to insert: 15
Array after insertion:
10 15 20 30 40
*/