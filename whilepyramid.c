#include<stdio.h>

int main()
{
    int a,i,j;

    printf("Enter The Value Of A:");
    scanf("%d",&a);

    i=1;
    while(i<=a)
    {
        j=a;
        while(j>=i)
        {
            printf(" ");
            j--;
        }

        j=1;
        while(j<=i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

}