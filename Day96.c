/*Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

enum Month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

struct Date
{
    int day;
    enum Month month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main()
{
    struct Employee emp = {101, "Rahul Sharma", 55000.50, {15, AUG, 2024}};

    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day96.out
Employee ID: 101
Name: Rahul Sharma
Salary: 55000.50
Joining Date: 15-08-2024
*/