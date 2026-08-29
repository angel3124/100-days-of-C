/*Q26: Write a program to print numbers from 1 to n.


Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day13.c -o prog2_day13.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day13.out
Enter the value of n: 3
Numbers from 1 to 3 are:
1 2 3
*/