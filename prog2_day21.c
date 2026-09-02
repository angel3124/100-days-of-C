/*Q42: Write a program to check if a number is a perfect number.


Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main()
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("%d is a Perfect Number.", num);
    else
        printf("%d is not a Perfect Number.", num);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day21.c -o prog2_day21.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day21.out
Enter a number: 10
10 is not a Perfect Number.
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day21.out
Enter a number: 6
6 is a Perfect Number.
*/













































































