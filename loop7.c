#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    printf("Enter The Value :");
    scanf("%d",&n);

    for(i=1;i<=3;i++)
    {
        printf("%d",i);
        printf("%d",i*i);
        printf("%d",i*i*i);
        printf("\n");
    }
    getch();
}