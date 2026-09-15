/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    long long number;

    int digit_counts[10] = {0};

    printf("Enter an integer number: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        number = -number;
    }

    if (number == 0)
    {
        digit_counts[0] = 1;
    }

    while (number > 0)
    {
        int digit = number % 10;
        digit_counts[digit]++;
        number = number / 10;
    }

    int most_frequent_digit = 0;
    int max_count = digit_counts[0];

    for (int i = 1; i < 10; i++)
    {
        if (digit_counts[i] > max_count)
        {
            max_count = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    printf("The digit that occurs the most is: %d\n", most_frequent_digit);
    printf("It appeared %d times.\n", max_count);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day32.out
Enter an integer number: 112233
The digit that occurs the most is: 1
It appeared 2 times
*/