#include<stdio.h>
#include<conio.h>
void main()
{   

    float len,wid,area;

    printf("Enter the value of length in cm :");
    scanf("%f",&len);

    printf("Enter the value of width in cm :");
    scanf("%f",&wid);

    area = len * wid;

    printf("Area of Ractangle is = %.2f",area);

    getch();
    
}