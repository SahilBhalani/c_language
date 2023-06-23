#include<stdio.h>
#include<conio.h>
void main()
{   

    float radius,area;

    printf("Enter the value of radius in cm :");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;

    printf("Area of Circle is = %.2f",area);

    getch();
    
}