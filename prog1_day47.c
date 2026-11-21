/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[])
{
    int count[256] = {0};
    int i;

    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }
    for (i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }
    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char word1[100];
    char word2[100];

    printf("Enter the first word: ");
    scanf("%99s", word1);

    printf("Enter the second word: ");
    scanf("%99s", word2);

    if (isAnagram(word1, word2))
    {
        printf("Result: \"%s\" and \"%s\" ARE anagrams!\n", word1, word2);
    }
    else
    {
        printf("Result: \"%s\" and \"%s\" are NOT anagrams.\n", word1, word2);
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day47.out
Enter the first word: listen
Enter the second word: silent
Result: "listen" and "silent" ARE anagrams!
*/