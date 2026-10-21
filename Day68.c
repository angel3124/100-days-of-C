/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one
. Print that missing number

Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array (n): ");
    if (scanf("%d", &n) != 1 || n < 1)
    {
        return 0;
    }
    int nums[n];

    printf("Enter %d integers (values between 0 and %d):\n", n, n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n; i++)
    {
        actual_sum += nums[i];
    }
    int missing_number = expected_sum - actual_sum;

    printf("Missing number: %d\n", missing_number);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day68.out
Enter the size of the array (n): 4
Enter 4 integers (values between 0 and 4):
0 3 2 4
Missing number: 1
*/