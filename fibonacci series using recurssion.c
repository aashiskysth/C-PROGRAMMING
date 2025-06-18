#include<stdio.h>
#include<conio.h>

int fibo(int n)
{
        if(n==1)
        {
            return 0;

        }
        else if(n==2)
        {
            return 1;
        }

        else
        {
            return (fibo(n-1)+fibo(n-2));
        }
}


int main()
{
        int i,n;
        printf("Enter number of term to print the fibonacci series:\n");
        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {
            printf("\t%d",fibo(i));
        }
        getch();
        return 0;
}

