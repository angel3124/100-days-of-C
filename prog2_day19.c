/*Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day19.c -o prog2_day19.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day19.out
Enter a number: 999
Sum of digits = 27
*/
