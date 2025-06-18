#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,*p;
    p=&a;

    printf("The address of a is : %d",&a);
    printf("\nThe address of a is : %d",p);
    printf("\nThe value of a is : %d",a);
    printf("\nThe value of a is : %d",*p);
    printf("\nThe value of p is : %d",&p);

    getch();
    return 0;
}
