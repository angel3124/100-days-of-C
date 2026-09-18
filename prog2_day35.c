/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotateRightByOne(int arr[], int size)
{

    int lastElement = arr[size - 1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = lastElement;
}

void rotateRight(int arr[], int size, int k)
{

    k = k % size;

    for (int i = 0; i < k; i++)
    {
        rotateRightByOne(arr, size);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Original array: \n");
    printArray(arr, size);

    rotateRight(arr, size, k);

    printf("Array after rotating right by %d positions: \n", k);
    printArray(arr, size);

    return 0;
}
/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day35.out
Original array:
1 2 3 4 5
Array after rotating right by 2 positions:
4 5 1 2 3
*/