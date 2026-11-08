/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum MenuChoice
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int choiceInput;
    double num1, num2, result;

    printf("--- Simple Calculator Menu ---\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choiceInput);

    enum MenuChoice choice = (enum MenuChoice)choiceInput;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice)
    {
    case ADD:
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;

    case SUBTRACT:
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;

    case MULTIPLY:
        result = num1 * num2;
        printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;

    default:
        printf("Invalid menu choice! Please select 1, 2, or 3.\n");
        break;
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day86.out
--- Simple Calculator Menu ---
1. ADD
2. SUBTRACT
3. MULTIPLY
Enter your choice (1-3): 1
Enter two numbers: 20 30
Result: 20.00 + 30.00 = 50.00
*/