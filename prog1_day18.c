/*Q35: Write a program to print all factors of a given number.

Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day18.c -o prog1_day18.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day18.out
Enter a number: 6
Factors of 6 are: 1 2 3 6
*/