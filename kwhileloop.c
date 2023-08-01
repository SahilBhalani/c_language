#include<stdio.h>

int main()
{
    int a,i,j;

    printf("Enter The Value Of A:");
    scanf("%d",&a);

    i=a;
    while(i>=1)
    {
        j=i;
        while(j<=a)
        {
            printf(" ");
            j++;
        }

        j=i;
        while(j>=1)
        {
            printf("*");
            j--;
        }
        printf("\n");
        i--;
    }
    
    i=a-1;
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
        	printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

}