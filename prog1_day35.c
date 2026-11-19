/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/#include <stdio.h>

int main()
{

    int numbers[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int largest = -1;
    int second_largest = -1;

    for (int i = 0; i < size; i++)
    {

        if (numbers[i] > largest)
        {

            second_largest = largest;

            largest = numbers[i];
        }

        else if (numbers[i] > second_largest && numbers[i] != largest)
        {
            second_largest = numbers[i];
        }
    }

    if (second_largest == -1)
    {
        printf("There is no second largest element.\n");
    }
    else
    {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day35.out
The largest element is: 35
The second largest element is: 34
*/