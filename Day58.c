/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int *nums, int numsSize, int *answer)
{
    int prefix = 1;
    for (int i = 0; i < numsSize; i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }
    int suffix = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
}
int main()
{
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int *answer = (int *)malloc(numsSize * sizeof(int));

    if (answer == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    productExceptSelf(nums, numsSize, answer);

    printf("Output array: [");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d", answer[i]);
        if (i < numsSize - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");

    free(answer);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day58.out
Output array: [24, 12, 8, 6]
*/