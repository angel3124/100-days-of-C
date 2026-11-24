/*Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k
 moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the window size (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid window size. k must be between 1 and %d.\n", n);
        return 1;
    }
    int arr[n];
    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max_sum = 0;

    printf("\nMaximum element in each subarray of size %d: ", k);

    for (int i = 0; i <= n - k; i++)
    {
        int current_max = arr[i];
        int current_sum = 0;

        for (int j = i; j < i + k; j++)
        {
            current_sum += arr[j];

            if (arr[j] > current_max)
            {
                current_max = arr[j];
            }
        }
        printf("%d ", current_max);

        if (i == 0 || current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    printf("\nMaximum sum of all subarrays of size %d: %d\n", k, max_sum);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day60.out
Enter the size of the array:  arr[1, 2, 3, 4, 5] , k = 1
3 3 4 5 5 5 6
*/