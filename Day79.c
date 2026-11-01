/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main()
{
    FILE *file;
    int num;
    int sum = 0;
    int count = 0;
    float average = 0.0;

    file = fopen("numbers.txt", "w");

    if (file == NULL)
    {
        printf("Error creating the file!\n");
        return 1;
    }
    fprintf(file, "10 20 30 40 55");

    fclose(file);
    printf("File 'numbers.txt' created successfully.\n\n");

    file = fopen("numbers.txt", "r");

    if (file == NULL)
    {
        printf("Error opening the file!\n");
        return 1;
    }
    while (fscanf(file, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }
    fclose(file);

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Total numbers read: %d\n", count);
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("The file is empty or contains no valid integers.\n");
    }
    return 0;
}
/*

C:\Users\WELCOME\OneDrive\Desktop\C_file>Day79.out
File 'numbers.txt' created successfully.

Total numbers read: 5
Sum: 155
Average: 31.00
*/