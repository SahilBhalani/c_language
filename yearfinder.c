#include<stdio.h>
#include<conio.h>
void main()
{
	float days,year;
	
	printf("Enter The Days =");
	scanf("%f",&days);
	
	year = days / 365;
	
	printf("Total Year is = %.3f",year);
	
	getch(); 
}
