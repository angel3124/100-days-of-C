/*Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;   

    while (num > 0) {
        digit = num % 10;

        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }

        num /= 10;
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day20.c -o prog1_day20.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day20.out
Enter a number: 12345
Product of odd digits = 15
*/
