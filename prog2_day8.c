/*Q16: Write a program to input three numbers and find the largest among them using if–else.


Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include <stdio.h>
int main() {

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Largest number = %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest number = %d\n", b);
    else
        printf("Largest number = %d\n", c);

    return 0;
}

/*\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day8.c -o prog2_day8.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day8.out
Enter three numbers: 2 4 7
Largest number = 7
*/
