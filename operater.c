#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b;
    b=a++ + ++a;
    printf("\n %d %d %d %d",b,a++,a,++a);
    return 0;
}
