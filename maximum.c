#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    
    printf("Enter The Number Of A :");
    scanf("%d",&a);
    
    printf("Enter The Number Of B :");
    scanf("%d",&b);
    
    printf("Enter The Number Of C :");
    scanf("%d",&c);
    
    if(a>b && a>c)
    {
    	printf("A is Max");
    }
    else if(b>c)
    {
    	printf("B is Max");
    }
    else
    {
    	printf("C is Max");
    }
    getch();
}