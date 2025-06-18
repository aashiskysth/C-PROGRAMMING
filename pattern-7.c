#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,space;
    for(i=1;i<=5;i++)
    {
        printf("\t%d",i);
    }
    for(j=4;j>=1;j--)
    {
        printf("\t%d",j);
        printf("\n");
        for(space=1;space<=4;space++)
            {
                printf(" ");
            }
    }


    return 0;
}

