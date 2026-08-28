/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>

int main() {
    int a, b, t;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    t = a;
    a = b;
    b = t;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}


C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day3.c -o prog2_day3.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day3.out
Enter two numbers: 3 5
After swapping: a = 5, b = 3

