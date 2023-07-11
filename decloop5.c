#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;

    printf("Enter The Value : ");
    scanf("%d",&a);

    for(i=1; i<=10 ; i++)
    {
        printf("%d\t *\t %d\t = %d\n",a,i,a*i);
    }
    
    getch();
}