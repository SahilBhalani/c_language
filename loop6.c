#include<stdio.h>
#include<conio.h>
 void main()
{
    int a,i;

    printf("Enter the Value : ");
    scanf("%d",&a);

    for(i=1; i<=a ;i++)
    {
        printf("%d\n",(i*i));
    }
    

    for(i=2; i<=a ;i+=2)
    {
        printf("%d\n",i);
    }
    

    for(i=1; i<=a ;i++)
    {
        printf("*\n",a);
    }
    


    getch();
}