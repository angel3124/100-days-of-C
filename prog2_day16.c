/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/


#include <stdio.h>

int main() {
    int n, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", & n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day16.c -o prog2_day16.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day16.out
Enter a number: 121
121 is a Palindrome number.

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day16.out
Enter a number: 123
123 is not a Palindrome number.
*/