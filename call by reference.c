#include<stdio.h>
#include<conio.h>
void fun(int*,int*);
int main()
{
    int a=5,b=6;
    printf("inside main function a=%d b=%d",a,b);
    fun(&a,&b);
}
void fun(int* a, int* b)
{
    *a=6;
    *b=5;
    printf("\ninside function a=%d b=%d",*a,*b);
}
