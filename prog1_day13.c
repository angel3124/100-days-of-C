/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op)
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error! Modulus by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day13.c -o prog1_day13.out
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day13.out
Enter first number: 4 + 2
Enter operator (+, -, *, /, %): Enter second number: Result = 6
*/