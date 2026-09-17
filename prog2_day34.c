/*Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main()
{

    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int deletePosition;

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position index to delete (0 to %d): ", size - 1);
    scanf("%d", &deletePosition);

    if (deletePosition < 0 || deletePosition >= size)
    {
        printf("Invalid position!\n");
    }
    else
    {

        for (int i = deletePosition; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Resulting array: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day34.out
Original array: 10 20 30 40 50
Enter the position index to delete (0 to 4): 3
Resulting array: 10 20 30 50
*/