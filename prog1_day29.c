/*Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main()
{
    int size, sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("\nThe sum of the array elements is %d\n", sum);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day29.out
Enter the number of elements in the array: 4
Enter 4 numbers:
2 4 6 8

The sum of the array elements is 20
*/