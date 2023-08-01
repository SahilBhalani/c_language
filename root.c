#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j;
    
    printf("Number\tSquare\tRoot : ");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
    	printf("%d\n",i);
    }
    
    for(i=1;i<=a;i++)
    {
    	printf("%d\n",i*i);
    }
}