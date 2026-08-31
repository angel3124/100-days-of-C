/*Q36: Write a program to find the HCF (GCD) of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    hcf = 1;

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day18.c -o prog2_day18.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day18.out
Enter two numbers: 12 18
HCF (GCD) of 12 and 18 is 6
*/