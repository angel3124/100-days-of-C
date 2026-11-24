/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char line[100];

    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }
    fprintf(fp, "Hello! This is my first file.\n");
    fprintf(fp, "I am learning file handling in C.\n");
    fprintf(fp, "This file is created using a C program.\n");
    fclose(fp);

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Contents of the file:\n\n");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day72.out
Contents of the file:

Hello! This is my first file.
I am learning file handling in C.
This file is created using a C program.
*/