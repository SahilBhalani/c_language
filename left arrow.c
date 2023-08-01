#include<stdio.h>

int main()
{
    int a,i,j;
    
    printf("Enter The Value Of A :");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
    	for(j=a;j>=i;j--)
        {
        	printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        	printf("*");
        }
        printf("\n");
    }
    
    for(i=2;i>=1;i--)
    {
    	for(j=i;j<=a;j++)
        {
        	printf(" ");
        }
        for(j=i;j>=1;j--)
        {
        	printf("*");
        }
        printf("\n");
    }
    
    
    
}