/*Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the 
array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which 
is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element
 is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/
#include <stdio.h>
#include <stdlib.h>

void findPreviousGreater(int arr[], int n)
{
    int *stack = (int *)malloc(n * sizeof(int));
    int top = -1;

    printf("Array Elements:      ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nPrevious Greater:    ");

    for (int i = 0; i < n; i++)
    {
        while (top != -1 && stack[top] <= arr[i])
        {
            top--;
        }
        if (top == -1)
        {
            printf("-1\t");
        }
        else
        {
            printf("%d\t", stack[top]);
        }
        top++;
        stack[top] = arr[i];
    }
    printf("\n");

    free(stack);
}
int main()
{
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    findPreviousGreater(arr, n);

    free(arr);
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day57.out
Enter the number of elements: arr = [1, 3, 2, 4]
-1, -1, 3, -1
*/