#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,n1=0,n2=1,n3;

    printf("Enter the term to print fibonacci series:\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    getch();
    return 0;
}
