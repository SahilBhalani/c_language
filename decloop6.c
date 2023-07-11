#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,factorial=1;


    printf("Enter The Value : ");
    scanf("%d",&a);

    for(i=1; i<=a ; i++)
       
        factorial=factorial*i;
        printf("Factorial Of %d is = %d\n",a,factorial);
    
    
    getch();
}