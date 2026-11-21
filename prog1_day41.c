/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int main()
{
    char myString[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", myString);

    while (myString[count] != '\0')
    {
        count++;
    }
    printf("The number of characters is: %d\n", count);

    return 0;
}

/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day41.out
Enter a string: madam
The number of characters is: 5
*/