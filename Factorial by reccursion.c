#include<stdio.h>
#include<conio.h>

int fact(int);

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fact(n);
    printf("THE FACTORIAL IS = %d",fact(n));
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
            return (n*fact(n-1));

    }
}
