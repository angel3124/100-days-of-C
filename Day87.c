/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum UserRole
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum UserRole currentRole = ADMIN;

    switch (currentRole)
    {
    case ADMIN:
        printf("Welcome, Admin! You have full system access.\n");
        break;
    case USER:
        printf("Welcome, User! You can view and edit your profile.\n");
        break;
    case GUEST:
        printf("Welcome, Guest! Please sign up to unlock more features.\n");
        break;
    default:
        printf("Unknown role.\n");
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day87.out
Welcome, Admin! You have full system access.
*/