#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,total,per;

    printf("Enter The Marks Below :\n");

    printf("Gujrati :- ");
    scanf("%d",&a);
    
    printf("Hindi :- ");
    scanf("%d",&b);

    printf("English :- ");
    scanf("%d",&c);

    printf("Maths :- ");
    scanf("%d",&d);

    total = a + b + c +d;

    printf("\nTotal is %d out of 400",total);

    per = total/4;

    printf("\nPercentage is %d",per);

    if(per >= 71)
    {
        printf("\nDistinction");
    }

    else if(per >= 60 &&  per <=70)
    {
        printf("\nFirst Class");
    }
    
    else if(per >= 50 && per <= 60)
    {
        printf("\nSecond Class");
    }

    else if(per >= 35 && per <= 50)
    {
        printf("\nPass Class");
    }
     
    else
    {
        printf("\nFailed");
    }

    getch();
}