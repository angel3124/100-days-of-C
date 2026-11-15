/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

enum Student
{
    ALICE,
    BOB,
    CHARLIE,
    DIANA,
    TOTAL_STUDENTS
};

int main()
{
    int marks[TOTAL_STUDENTS] = {85, 92, 78, 95};

    const char *names[TOTAL_STUDENTS] = {"Alice", "Bob", "Charlie", "Diana"};

    enum Student topStudent = ALICE;

    for (int i = 1; i < TOTAL_STUDENTS; i++)
    {
        if (marks[i] > marks[topStudent])
        {
            topStudent = i;
        }
    }
    printf("Highest Marks: %d\n", marks[topStudent]);
    printf("Top Student: %s\n", names[topStudent]);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day93.out
Highest Marks: 95
Top Student: Diana
*/