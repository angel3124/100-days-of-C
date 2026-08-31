/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0)
    {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

/*C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day17.c -o prog1_day17.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day17.out
Enter a number: 123
123 is not an Armstrong number.
*/