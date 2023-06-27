#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;

    printf("Enter the value of A : ");
    scanf("%d",&a);

    printf("Enter the value of B : ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("A is Max");        
    }

    else
    {
        printf("B is Max");
    }
    getch();
}
