#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j;
    
    printf("Enter Value of A :");
    scanf("%d",&a);

    for(i=1; i<=a ; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");

    }


}