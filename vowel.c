#include<stdio.h>
#include<conio.h>
void main()
{
    char a;
    
    printf("Enter The Alphabet : ");
    scanf("%c",&a);

    if(a =='a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a ==  'I' || a == 'O' || a == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("constant");
    }
    getch();



}