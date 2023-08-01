#include<stdio.h>

int main()
{
    int a,i,j;

    printf("Enter The Number :");
    scanf("%d",&a);

    i=1;
    while(i<=a)
    {
        j=1;
        while(j<=10)
        {
            printf("%d * %d = %d\n",i,j,i*j);
            j++;
        }
        printf("------------");
        printf("\n");
        i++;
    }
}