#include<stdio.h>
#include<conio.h>

long fact(int n)
{
    long fact=1,i;

    for(i=0;i<n;i++)
    {
        fact=fact*i;
    }

    return fact;

}

int main()
{
    int f1=1,f2=1,f3=1;
    long comb;
    int n,r;

    printf("Enter n and r:\n");
    scanf("%d %d",&n,&r);
    f1=fact(n);
    f2=fact(n-r);
    f3=fact(r);

    comb=f1/(f2*f3);

    printf("%dC%d = %ld",n,r,comb);

    getch();
    return 0;
}


