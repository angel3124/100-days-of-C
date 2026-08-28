/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.


Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/

#include <stdio.h>

int main()
{
    int n;
	
	scanf("%d",&n);
	
	if(n % 2 == 0)
    {
		printf("%d is even",n);
	}
	else 
	{
		printf("%d is odd",n);
    }
	  
	 return 0;
	}
	
	C:\TDM-GCC-64>cd..

/*\>cd users

C:\Users>cd welcome

C:\Users\WELCOME>cd onedrive

C:\Users\WELCOME\OneDrive>cd desktop

C:\Users\WELCOME\OneDrive\Desktop>cd C_file

C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day6.c -o prog1-day6

C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day6.c -o prog1_day6.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day6.out
1 4
1 is odd*/