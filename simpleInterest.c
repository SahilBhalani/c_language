#include<stdio.h>
#include<conio.h>
void main()
{

    int principal,rate,time,interest;

    printf("Enter the value of principal : ");
    scanf("%d",&principal);   

    printf("Enter the value of rate : ");
    scanf("%d",&rate);

    printf("Enter the value of time : ");
    scanf("%d",&time);

    interest = principal * time * rate / 100;

    printf("Simple Interest is = %d",interest);

    getch();



}