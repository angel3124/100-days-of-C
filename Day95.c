/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <string.h>

enum Status
{
    PASS,
    DISTINCTION,
    FAIL
};

struct Student
{
    int rollNo;
    char name[50];
    float marks;
    enum Status result;
};

struct Student getTopStudent(struct Student list[], int size)
{
    struct Student top = list[0];

    for (int i = 1; i < size; i++)
    {
        if (list[i].marks > top.marks)
        {
            top = list[i];
        }
    }
    return top;
}

int main()
{
    struct Student classList[3] = {
        {101, "Aarav", 78.5, PASS},
        {102, "Priya", 94.0, DISTINCTION},
        {103, "Rohan", 82.0, PASS}};

    struct Student topper = getTopStudent(classList, 3);

    printf("--- Top Student Details ---\n");
    printf("Roll No : %d\n", topper.rollNo);
    printf("Name    : %s\n", topper.name);
    printf("Marks   : %.2f\n", topper.marks);

    printf("Status  : ");
    if (topper.result == DISTINCTION)
    {
        printf("Distinction\n");
    }
    else if (topper.result == PASS)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day95.out
--- Top Student Details ---
Roll No : 102
Name    : Priya
Marks   : 94.00
Status  : Distinction
*/