/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. 
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid size.\n");
        return 0;
    }
    int nums[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int max_val = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > max_val)
        {
            max_val = nums[i];
        }
    }
    int *seen = (int *)calloc(max_val + 1, sizeof(int));
    if (seen == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    int repeated_element = -1;

    for (int i = 0; i < n; i++)
    {
        int current = nums[i];

        if (seen[current] == 1)
        {
            repeated_element = current;
            break;
        }
        seen[current] = 1;
    }
    if (repeated_element != -1)
    {
        printf("Repeated element: %d\n", repeated_element);
    }
    else
    {
        printf("No repeated element found.\n");
    }
    free(seen);
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day69.out
Enter the number of elements: 4
Enter 4 integers: 1 3 3 4
Repeated element: 3
*/