/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2)
    {
        printf("-1 -1\n");
        return 0;
    }
    int nums[n];
    int original_indices[n];

    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        original_indices[i] = i;
    }
    int target;
    printf("Enter target sum: ");
    scanf("%d", &target);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp_val = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp_val;

                int temp_idx = original_indices[j];
                original_indices[j] = original_indices[j + 1];
                original_indices[j + 1] = temp_idx;
            }
        }
    }
    int left = 0;
    int right = n - 1;
    int found = 0;

    while (left < right)
    {
        int current_sum = nums[left] + nums[right];

        if (current_sum == target)
        {
            printf("%d %d\n", original_indices[left], original_indices[right]);
            found = 1;
            break;
        }
        else if (current_sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    if (!found)
    {
        printf("-1 -1\n");
    }
    return 0;
}

/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day66.out
Enter number of elements: 4
Enter 4 positive integers: 2 7 11 15
Enter target sum: 9
0 1
*/