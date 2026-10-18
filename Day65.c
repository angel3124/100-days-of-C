/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are
valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    char t[101];

    printf("Enter first string (s): ");
    scanf("%100s", s);

    printf("Enter second string (t): ");
    scanf("%100s", t);

    if (strlen(s) != strlen(t))
    {
        printf("Not Anagram\n");
        return 0;
    }
    int counts[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }
    int isAnagram = 1;

    for (int i = 0; i < 26; i++)
    {
        if (counts[i] != 0)
        {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram == 1)
    {
        printf("Anagram\n");
    }
    else
    {
        printf("Not Anagram\n");
    }
    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day65.out
Enter first string (s): anagram
Enter second string (t): nagaram
Anagram
*/