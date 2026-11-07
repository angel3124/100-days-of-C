/*Q135: Assign explicit values starting from 10 and print them.

Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>

enum Numbers
{
    VAL_ONE = 10,
    VAL_TWO,
    VAL_THREE,
    VAL_FOUR
};

int main()
{
    enum Numbers a = VAL_ONE;
    enum Numbers b = VAL_TWO;
    enum Numbers c = VAL_THREE;
    enum Numbers d = VAL_FOUR;

    printf("VAL_ONE   = %d\n", a);
    printf("VAL_TWO   = %d\n", b);
    printf("VAL_THREE = %d\n", c);
    printf("VAL_FOUR  = %d\n", d);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day85.out
VAL_ONE   = 10
VAL_TWO   = 11
VAL_THREE = 12
VAL_FOUR  = 13
*/