#include<stdio.h>
#include<conio.h>
void main()
{
	int days;
	float year;
	
	printf("Enter The Year =");
	scanf("%f",&year);
	
	days = year * 365;
	
	printf("Total Days is = %d",days);
	
	getch(); 
}
