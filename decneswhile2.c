#include<stdio.h>

int main()
{
    char a,i,j;

    printf("Enter The Character Of A:");
    scanf("%c",&a);

    i='A';
    while(i<=a)
    {
        j='A';
        while(j<=i)
        {
            printf("%c",j);
            j++;
        }
        printf("\n");
        i++;
    }

    i=a-1;
    while(i>='A')
    {
        j='A';
        while(j<=i)
        {
            printf("%c",j);
            j++;
        }
        printf("\n");
        i--;
    }

}