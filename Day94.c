/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

enum Grade
{
    PASS,
    FAIL
};

struct Student
{
    char name[50];
    int rollNumber;
    enum Grade status;
};

void printStudent(struct Student s)
{
    printf("--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);

    if (s.status == PASS)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }
}
int main()
{
    struct Student student1 = {"Rahul", 101, PASS};

    printStudent(student1);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day94.out
--- Student Details ---
Name: Rahul
Roll Number: 101
Result: Pass
*/