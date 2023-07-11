#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;

    printf("Enter The Value : ");
    scanf("%d",&a);

    for(i=1; i<=a ; i++)
    {
        printf("%d\n",i%2);
    }
    
    getch();
}