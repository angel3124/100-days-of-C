/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. 
Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}
int lengthOfLongestSubstring(char *s)
{
    int n = strlen(s);
    int maxLength = 0;
    int left = 0;
    int lastSeen[256];
    for (int i = 0; i < 256; i++)
    {
        lastSeen[i] = -1;
    }

    for (int right = 0; right < n; right++)
    {
        char currentChar = s[right];

        if (lastSeen[(unsigned char)currentChar] >= left)
        {
            left = lastSeen[(unsigned char)currentChar] + 1;
        }
        lastSeen[(unsigned char)currentChar] = right;

        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}
int main()
{
    char s[1000]; // Array to hold the input string

    printf("Enter a string: ");

    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    int result = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", result);

    return 0;
}
/*
C:\Users\WELCOME\OneDrive\Desktop\C_file>Day64.out
Enter a string: abcabcbb
Length of the longest substring without repeating characters: 3
*/