#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);

     printf("Enter the value of b :");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("after Swapping");

    printf("a is %d",a);
    printf("b is %d",b);

    getch();
}