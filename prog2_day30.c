/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main()
{
    int arr[] = {-5, 0, 12, -3, 8, 0, -1, 4, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }

    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zeroes: %d\n", zeroCount);

    return 0;
}

/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day30.out
Positive numbers: 4
Negative numbers: 3
Zeroes: 3

*/