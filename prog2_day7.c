/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.


Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a Vowel.\n", ch);
    }
    else
    {
        printf("%c is a Consonant.\n", ch);
    }

    return 0;
}

/*\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog2_day7.c -o prog2_day7.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day7.out
Enter a character: a
a is a Vowel.*/