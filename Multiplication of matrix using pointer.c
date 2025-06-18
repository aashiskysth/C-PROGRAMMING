#include<stdio.h>
#include<conio.h>
#define m 3
#define n 3
#define p 3
#define q 3
int main()
{
    int a[m][n], b[p][q],product[m][q], i, j, k, sum=0;

    printf("Enter the first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the element:\n");
            scanf("%d",*(a+i)+j);
        }
    }

    printf("Enter the second matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("Enter the element:\n");
            scanf("%d",*(b+i)+j);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
            {
                sum+=*(*(a+i)+k) * *(*(b+k)+j);
            }
            *(*(product+i)+j)=sum;
            sum=0;
        }
    }

    printf("The product matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("\t%d",*(*(product+i)+j));
            printf("\n");
        }
    }


    getch();
    return 0;

}
