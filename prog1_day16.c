/*Q31: Write a program to take a number as input and print its equivalent binary representation.


Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main()
{
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary equivalent: 0");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary equivalent: ");

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day16.c -o prog1_day16.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day16.out
Enter a decimal number: 7
Binary equivalent: 111
*/