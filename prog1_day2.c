/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>
int main()
{
    int x;
	x=2;
	int a,b;
	int area , perimeter;
	scanf("%d%d",&a,&b);
	area=a*b;
	perimeter=x*(a+b);
	printf("area=%d,perimeter=%d",area,perimeter);
	return 0;
}

/*

C:\Users\WELCOME\OneDrive\Desktop\C_file

C:\Users\WELCOME\OneDrive\Desktop\C_file>gcc prog1_day2.c -o prog1_day2.out

C:\Users\WELCOME\OneDrive\Desktop\C_file>prog1_day2.out
5 10
area=50,perimeter=30*/