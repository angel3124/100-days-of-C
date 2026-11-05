/*Q133: Create an enum for months and print how many days each month has.

Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

enum Month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    enum Month currentMonth;

    for (currentMonth = JANUARY; currentMonth <= DECEMBER; currentMonth++)
    {
        printf("Month %d has ", currentMonth);

        switch (currentMonth)
        {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days.\n");
            break;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days.\n");
            break;
        case FEBRUARY:
            printf("28 days (or 29 days in a leap year).\n");
            break;
        default:
            printf("Invalid month.\n");
        }
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day83.out
Month 1 has 31 days.
Month 2 has 28 days (or 29 days in a leap year).
Month 3 has 31 days.
Month 4 has 30 days.
Month 5 has 31 days.
Month 6 has 30 days.
Month 7 has 31 days.
Month 8 has 31 days.
Month 9 has 30 days.
Month 10 has 31 days.
Month 11 has 30 days.
Month 12 has 31 days.
*/