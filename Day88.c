/*Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    DAY_COUNT
};

int main()
{
    const char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"};
    for (int i = SUNDAY; i < DAY_COUNT; i++)
    {
        printf("%s = %d\n", dayNames[i], i);
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day88.out
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/