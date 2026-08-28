/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;

}

/*C:\Users\WELCOME\OneDrive\Desktop>cd C_file

C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day3.c -o prog1_day3.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day3.out
Enter temperature in Celsius: 100
Temperature in Fahrenheit = 212.00
*/
