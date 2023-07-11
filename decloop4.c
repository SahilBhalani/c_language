#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;

    printf("Enter The Value : ");
    scanf("%d",&a);

    for(i=a; i>=1 ; i--)
    {
        printf("%d\t %d\t %d\n",i,i*i,i+i);
    }
    
    getch();
}