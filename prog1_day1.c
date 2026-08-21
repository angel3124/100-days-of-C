/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include<stdio.h>
int main()
{
    int a,b;
	printf("hello!Enter two number:");
	scanf("%d%d" ,&a,&b) ;
	printf("a=%d b=%d\n",a,b);
	return 0;
}


/*C:\TDM-GCC-64>cd..

C:\>cd users

C:\Users>cd welcome

C:\Users\WELCOME>cd onedrive

C:\Users\WELCOME\OneDrive>cd desktop

C:\Users\WELCOME\OneDrive\Desktop>cd C_file

C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1.c -o prog1.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1.out
hello!Enter two number:3 4
a=3 b=4*/