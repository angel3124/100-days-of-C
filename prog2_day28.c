/*Q56: Read and print elements of a one-dimensional array.


Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number for slot %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\nHere are the numbers you entered:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Slot %d holds: %d\n", i, numbers[i]);
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day28.out
Enter 5 numbers:
Enter number for slot 0: 1 2 3 4 5
Enter number for slot 1: Enter number for slot 2: Enter number for slot 3: Enter number for slot 4:
Here are the numbers you entered:
Slot 0 holds: 1
Slot 1 holds: 2
Slot 2 holds: 3
Slot 3 holds: 4
Slot 4 holds: 5
*/