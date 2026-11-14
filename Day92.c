/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

enum Branch
{
    CSE = 1,
    ECE = 2,
    MECH = 3
};

struct Student
{
    int rollNo;
    char name[50];
    float marks;
    enum Branch branch;
};

int main()
{
    struct Student students[5];
    int branchChoice;

    printf("--- Enter Details of 5 Students ---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter First Name: ");
        scanf("%s", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        printf("Select Branch (1: CSE, 2: ECE, 3: MECH): ");
        scanf("%d", &branchChoice);
        students[i].branch = (enum Branch)branchChoice;
    }
    printf("\n--- Displaying Student Details ---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number : %d\n", students[i].rollNo);
        printf("Name        : %s\n", students[i].name);
        printf("Marks       : %.2f\n", students[i].marks);

        printf("Branch      : ");
        if (students[i].branch == CSE)
        {
            printf("CSE\n");
        }
        else if (students[i].branch == ECE)
        {
            printf("ECE\n");
        }
        else if (students[i].branch == MECH)
        {
            printf("MECH\n");
        }
        else
        {
            printf("Unknown\n");
        }
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day92.out
--- Enter Details of 5 Students ---

Student 1:
Enter Roll Number: 101
Enter First Name: asha
Enter Marks: 57
Select Branch (1: CSE, 2: ECE, 3: MECH): 1

Student 2:
Enter Roll Number: 102
Enter First Name: nisha
Enter Marks: 89
Select Branch (1: CSE, 2: ECE, 3: MECH): 1

Student 3:
Enter Roll Number: 107
Enter First Name: hina
Enter Marks: 28
Select Branch (1: CSE, 2: ECE, 3: MECH): 2

Student 4:
Enter Roll Number: 104
Enter First Name: sita
Enter Marks: 69
Select Branch (1: CSE, 2: ECE, 3: MECH): 3

Student 5:
Enter Roll Number: 102
Enter First Name: tina
Enter Marks: 90
Select Branch (1: CSE, 2: ECE, 3: MECH): 2

--- Displaying Student Details ---

Student 1:
Roll Number : 101
Name        : asha
Marks       : 57.00
Branch      : CSE

Student 2:
Roll Number : 102
Name        : nisha
Marks       : 89.00
Branch      : CSE

Student 3:
Roll Number : 107
Name        : hina
Marks       : 28.00
Branch      : ECE

Student 4:
Roll Number : 104
Name        : sita
Marks       : 69.00
Branch      : MECH

Student 5:
Roll Number : 102
Name        : tina
Marks       : 90.00
Branch      : ECE
*/