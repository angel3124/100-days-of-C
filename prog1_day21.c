/*Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
int main()

{
    int n, first, last, digits, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    int temp = n;
    while (temp >= 10)
    {
        temp /= 10;
        power *= 10;
    }

    first = temp;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day21.c -o prog1_day21.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day21.out
Enter a number: 1001
Number after swapping first and last digit = 1001
*/