#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j;
    
    printf("Enter The Value Of A :");
    scanf("%d",&a);
    
    for(i=a;i>=1;i--)
    {
    	for(j=i;j<=a;j++)
        {
        	printf(" ");
        }
        for(j=i;j>=1;j--)
        {
        	printf("%d",i*i);
        }
        printf("\n");
    }
}