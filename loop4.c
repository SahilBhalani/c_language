#include<stdio.h>
#include<conio.h>
 void main()
{
    int n,i;

    printf("Enter the Value : ");
    scanf("%d",&n);

    for(i=1; i<=n ;i++)
    {
        printf("%d",(i * i));
    }

    getch();
}