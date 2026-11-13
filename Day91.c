/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

enum Action
{
    READ_DATA,
    PRINT_DATA
};

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s1;

    enum Action currentAction = READ_DATA;

    if (currentAction == READ_DATA)
    {
        printf("Enter student name: ");
        scanf("%49s", s1.name);

        printf("Enter roll number: ");
        scanf("%d", &s1.roll_no);

        printf("Enter marks: ");
        scanf("%f", &s1.marks);

        currentAction = PRINT_DATA;
    }
    if (currentAction == PRINT_DATA)
    {
        printf("\n--- Student Details ---\n");
        printf("Name: %s\n", s1.name);
        printf("Roll Number: %d\n", s1.roll_no);
        printf("Marks: %.2f\n", s1.marks);
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day91.out
Enter student name: asha
Enter roll number: 101
Enter marks: 90

--- Student Details ---
Name: asha
Roll Number: 101
Marks: 90.00
*/