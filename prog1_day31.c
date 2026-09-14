/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main()
{

    int numbers[5] = {12, 45, 7, 23, 9};
    int total_elements = 5;
    int target_value;
    int found_index = -1;

    printf("Enter a number to search for: ");
    scanf("%d", &target_value);

    for (int i = 0; i < total_elements; i++)
    {

        if (numbers[i] == target_value)
        {
            found_index = i;
            break;
        }
    }

    if (found_index != -1)
    {
        printf("Success! Number %d found at index position %d.\n", target_value, found_index);
    }
    else
    {
        printf("Sorry, number %d is not in the array.\n", target_value);
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day31.out
Enter a number to search for: 45
Success! Number 45 found at index position 1
*/
