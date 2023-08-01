#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,n,i,j;
    
    printf("Enter Number Of Series");
    scanf("%d",&j);
    
    printf("%d %d",a,b);
    
    for(i=2;i<n;i++)
    {
    	j=a+b;
        a=b;
        b=j;
        
        printf("%d",j);
    }
    getch();
}