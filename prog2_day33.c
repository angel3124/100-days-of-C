/*Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 25;
    int i, pos;

    printf("Original array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        if (arr[i] > key)
        {
            pos = i;
            break;
        }
    }

    if (i == n)
    {
        pos = n;
    }

    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

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
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day33.out
Original array:
10 20 30 40 50
Array after insertion:
10 20 30 30 40 50*/