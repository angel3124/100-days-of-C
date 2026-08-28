/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, SI, CI, amount;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    SI = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;

    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f\n", CI);

    return 0;
}


C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day5.out
Enter Principal Amount: 1000 5 2
Enter Rate of Interest: Enter Time (in years):
Simple Interest = 100.00
Compound Interest = 102.50
