#include<stdio.h>
#include<conio.h>
int main()
{
    int c,fah;
    printf("Enter temperature in centigrade:\n");
    scanf("%d",&c);
    fah=change(c);
    printf("The temperature in fahrenheit = %d",fah);
}
int change(int c)
{
    int fah;
    fah=(9*c/5) + 32;
    return fah;
}
