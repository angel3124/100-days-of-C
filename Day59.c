/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the subarray size (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        printf("Invalid value of k!\n");
        return 0;
    }
    int current_sum = 0;
    for (int i = 0; i < k; i++)
    {
        current_sum += arr[i];
    }
    int max_sum = current_sum;

    for (int i = k; i < n; i++)
    {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }
    printf("Maximum sum of subarray of size %d is: %d\n", k, max_sum);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day59.out
Enter the number of elements in the array: 4
Enter 4 elements:
100 200 300 400
Enter the subarray size (k): 2
Maximum sum of subarray of size 2 is: 700
*/