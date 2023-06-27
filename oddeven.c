#include<stdio.h>
#include<conio.h>
void main()
{
    int a;

    printf("Enter The Number :");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("Number is Even");
    }
    else 
    {
        printf("Number is Odd");
    }
    getch();
}