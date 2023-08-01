#include<stdio.h>

int main()
{
	int a,i;
    printf("Enter The Value Of A :");
    scanf("%d",&a);
    
    if(a%2==0)
    {
    i=1;
    while(i <= a)
    {
    	printf("%d",i+i);
        i++;
    } 
    }
    
    else
    {
    i=1;
    while(i <= a)
    {
    	printf("%d",i*i);
        i++;
    } 
    
    }
}