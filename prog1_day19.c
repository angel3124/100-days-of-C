/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day19.c -o prog1_day19.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day19.out
Enter two numbers: 7 3
LCM of 7 and 3 = 21
*/
