/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status current_status = SUCCESS;

    switch (current_status)
    {
    case SUCCESS:
        printf("Operation completed successfully!\n");
        break;
    case FAILURE:
        printf("Operation failed. Please try again.\n");
        break;
    case TIMEOUT:
        printf("Operation timed out. No response received.\n");
        break;
    default:
        printf("Unknown status code.\n");
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day84.out
Operation completed successfully!
*/