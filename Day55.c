/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

int findMajorityElement(int nums[], int n)
{
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int actualCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            actualCount++;
        }
    }
    if (actualCount > n / 2)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int result = findMajorityElement(nums, n);

    if (result != -1)
    {
        printf("The majority element is: %d\n", result);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>day55.out
Enter the number of elements: [3,2,3]
3
*/