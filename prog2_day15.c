/*Q30: Write a program to reverse a given number.


Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
int main() 
{
    int n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day15.c -o prog2_day15.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day15.out
Enter a number: 1234
Reversed number = 4321
*/