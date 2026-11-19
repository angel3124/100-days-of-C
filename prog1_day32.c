/*Q63: Merge two arrays.
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5


*/
#include <stdio.h>

int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};

    int size1 = 3;
    int size2 = 3;
    int mergedSize = size1 + size2;

    int merged[6];
    int index = 0;

    for (int i = 0; i < size1; i++)
    {
        merged[index] = arr1[i];
        index++;
    }

    for (int i = 0; i < size2; i++)
    {
        merged[index] = arr2[i];
        index++;
    }

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day32.out
Merged array: 1 2 3 4 5 6
*/