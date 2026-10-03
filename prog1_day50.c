/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main()
{
    char original_date[] = "25/04/2026";
    int day, year;
    int month;
    char new_date[20];

    sscanf(original_date, "%d/%d/%d", &day, &month, &year);
    sprintf(new_date, "%02d-Apr-%d", day, year);
    printf("Original Date: %s\n", original_date);
    printf("Modified Date: %s\n", new_date);

    return 0;
}
/*C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day50.out
Original Date: 25/04/2026
Modified Date: 25-Apr-2026
*/