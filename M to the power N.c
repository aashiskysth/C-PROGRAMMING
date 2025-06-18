#include<stdio.h>
#include<conio.h>
int main()
{
    int i, answer=1;
    int m,n;

    printf("Enter M as a base : \n");
    scanf("%d",&m);

    printf("Enter N as a power : \n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        answer = answer*m;
    }
    printf("%d^%d = %d",m,n,answer);

    getch();
    return 0;

}

