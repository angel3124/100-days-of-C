/*Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

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
    SATURDAY
};

enum Status
{
    SUCCESS = 200,
    WARNING = 404,
    ERROR = 500
};

int main()
{
    enum Day today = WEDNESDAY;
    enum Status serverState = ERROR;

    printf("--- Default Enum Values ---\n");
    printf("SUNDAY    = %d\n", SUNDAY);
    printf("MONDAY    = %d\n", MONDAY);
    printf("WEDNESDAY = %d (stored in variable 'today')\n", today);
    printf("SATURDAY  = %d\n\n", SATURDAY);

    printf("--- Custom Enum Values ---\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("WARNING = %d\n", WARNING);
    printf("ERROR   = %d (stored in variable 'serverState')\n", serverState);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day89.out
--- Default Enum Values ---
SUNDAY    = 0
MONDAY    = 1
WEDNESDAY = 3 (stored in variable 'today')
SATURDAY  = 6

--- Custom Enum Values ---
SUCCESS = 200
WARNING = 404
ERROR   = 500 (stored in variable 'serverState')
*/