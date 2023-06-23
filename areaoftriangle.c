#include<stdio.h>
#include<conio.h>
void main()
{   

    float len,base,area;

    printf("Enter the value of length in cm :");
    scanf("%f",&len);

    printf("Enter the value of base in cm :");
    scanf("%f",&base);

    area = len * base;

    printf("Area of Triangle is = %.2f",area);

    getch();
    
}