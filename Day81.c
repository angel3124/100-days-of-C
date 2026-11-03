/*Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include <stdio.h>

enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    for (enum Days d = SUNDAY; d <= SATURDAY; d++)
    {
        printf("Day value: %d\n", d);
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day81.out
Day value: 0
Day value: 1
Day value: 2
Day value: 3
Day value: 4
Day value: 5
Day value: 6
*/