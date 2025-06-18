#include<stdio.h>
#include<conio.h>
int main()
{
    int fact=1,n,i;
    printf("Enter the number for the factorial:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is %d",fact);
    return 0;
}
