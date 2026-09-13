/*Q59: Count even and odd numbers in an array.

Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main()
{
    int arr[] = {2, 5, 8, 9, 12, 15, 16, 21, 4, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("Total even numbers: %d\n", even_count);
    printf("Total odd numbers: %d\n", odd_count);

    return 0;
}

/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day30.out
Total even numbers: 5
Total odd numbers: 5
*/