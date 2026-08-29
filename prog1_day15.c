/*Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/


#include <stdio.h>
int main()
{
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day15.c -o prog1_day15.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day15.out
Enter a number: 5
Factorial of 5 = 120
*/
