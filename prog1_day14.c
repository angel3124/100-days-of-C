/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (2 * i - 1);
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day14.c -o prog1_day14.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day14.out
Enter the value of n: 3
Sum of first 3 odd numbers = 9
*/