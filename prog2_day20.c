/*Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>

int main() {
    char binary[100];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    while (binary[i] != '\0') {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 1;
        }
        i++;
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}


/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day20.c -o prog2_day20.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day20.out
Enter a binary number: 1010
1's Complement = 0101

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day20.out
Enter a binary number: 1111
1's Complement = 0000
*/