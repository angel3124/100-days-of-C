/*Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0)
            printf("The number is Zero.\n");
        else
            printf("The number is Positive.\n");
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}


/*\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day6.c -o prog2_day6.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day6.out
Enter an integer: -5
The number is Negative.*/