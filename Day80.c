/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int n, i, roll;
    char name[50];
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error! Could not create the file.\n");
        return 1;
    }
    printf("How many students do you want to enter? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name (single word): ");
        scanf("%s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);
    printf("\nRecords saved successfully to students.txt!\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("Error! Could not open the file for reading.\n");
        return 1;
    }
    printf("\n--- Reading Student Records from File ---\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name: %-15s | Roll No: %-5d | Marks: %.2f\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day80.out
How many students do you want to enter? 1

Enter details for Student 1:
Name (single word): asha
Roll Number: 101
Marks: 85

Records saved successfully to students.txt!

--- Reading Student Records from File ---
Name: asha            | Roll No: 101   | Marks: 85.00
*/