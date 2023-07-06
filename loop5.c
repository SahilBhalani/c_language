#include<stdio.h>
#include<conio.h>
 void main()
{
    int n,i;

    printf("Enter the Value : ");
    scanf("%d",&n);

    for(i=1; i<=n ;i++)
    {
        printf("1",n);
    }
    printf("\n");

    for(i=1; i<=n ;i++)
    {
        printf("*",n);
    }
    printf("\n");
 
    getch();
}