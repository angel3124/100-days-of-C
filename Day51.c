#include <stdio.h>

int main()
{
    int nums[] = {2, 4, 4, 4, 6, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 4;
    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    if (first != -1)
    {
        printf("First occurrence: %d\n", first);
        printf("Last occurrence: %d\n", last);
    }
    else
    {
        printf("-1, -1\n");
    }
    return 0;
}