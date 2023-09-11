//First function program

#include<stdio.h>

void French()
{
     printf("Bonjour \n");
}
void Indian()
{
    printf("Jai Hind!! \n");
    printf("Vande Matram!!");
}
int main()
{
    char n;

    printf("Tell by indication you are Indian - i or French - f ");
    scanf("%c",&n);
    if(n == 'f')
    French();
    else
    Indian();
    return 0;
}
