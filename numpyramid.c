#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j;
    
    printf("Enter The Value Of A :");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
    	for(j=i;j<=a;j++)
        {
        	printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        	printf("%d ",i);
        }
        printf("\n");
    }
}