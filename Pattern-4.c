#include<stdio.h>
#include<conio.h>
#define n 10
int main()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t*");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t*");
        }
        if(i<n)
        {
            printf("\n");
        }
    }

    for(i=1;i<=n;i++)
    {
        printf("\n \t*");
    }

    return 0;
}

