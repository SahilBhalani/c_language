#include<stdio.h>
#include<conio.h>

void main()
{
    int a,i,j;

    printf("Enter The Value Of A :");
    scanf("%d",&a);

    for(i=a;i>=1;i--)
    {
    	for(j=a;j<=i;j--)
        {
        	printf(" ");
        }
        for(j=1;j>=1;j--)
        {
        	printf("*");
        }
        printf("\n");
    
    }
    
    for(i=a-1;i<=a;i++)
    {
    	for(j=i;j<=1;j++)
        {
        printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        	printf("*");
        }
        printf("\n");
    }
    getch();
}