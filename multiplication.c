#include<stdio.h>
#include<conio.h>
int main()
{
    int mat1[10][10],mat2[10][10],product[10][10],i,j,k;
    int sum=0,m,n,p,q;

    do{
    printf("Enter the values of m and n i.e m*n for 1st matrix:\n");
    scanf("%d*%d",&m,&n);

    printf("Enter the values of p and q i.e p*q for 2nd matrix:\n");
    scanf("%d*%d",&p,&q);}while(n!=p);


    printf("\nEnter the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }


    printf("\nEnter the second matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<n;k++)
                {
                    sum+=mat1[i][k]*mat2[k][j];
                }
             product[i][j]=sum;
             sum=0;

        }
    }


    printf("\nThe product is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",product[i][j]);
        }
        printf("\n");
    }

    printf("\nThank you from Aashish karn!!!\n");

    getch();
    return 0;
}
