#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    
    printf("Enter The Number Of A :");
    scanf("%d",&a);
    
    if(a%4==0)
    {
    	printf("This Year is leap year");
    }
    else
    {
    	printf("This Year is not leap year");
    }
    
    getch();
}