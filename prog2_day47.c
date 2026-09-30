/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0;
    int current_len = 0;
    int max_len = 0;
    int max_start_index = 0;

    while (sentence[i] != '\0')
    {
        if (sentence[i] != ' ' && sentence[i] != '\n')
        {
            current_len++;
        }
        else
        {
            if (current_len > max_len)
            {
                max_len = current_len;
                max_start_index = i - current_len;
            }
            current_len = 0;
        }
        i++;
    }
    if (current_len > max_len)
    {
        max_len = current_len;
        max_start_index = i - current_len;
    }
    printf("The longest word has %d characters.\n", max_len);
    printf("The longest word is: ");

    for (int j = max_start_index; j < max_start_index + max_len; j++)
    {
        putchar(sentence[j]);
    }
    printf("\n");

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog2_day47.out
Enter a sentence: I love programming
The longest word has 11 characters.
The longest word is: programming
*/