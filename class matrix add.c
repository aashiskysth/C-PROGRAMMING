#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,mat1[m][n],mat2[m][n],sum[m][n],i,j;

    printf("\nEnter the values of m and and i.e. m*n : \n");
    scanf("%d*%d",&m,&n);

    printf("\nEnter the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter %d*%d element:",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }


    printf("\nEnter the second matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter %d*%d element:",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }


    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }


    printf("\nThe sum is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
