#include<stdio.h>
#include<conio.h>

void display(int n[])
{
    n[0]=10;
    n[1]=20;
    n[2]=30;
    n[3]=40;
    n[4]=50;
}

int main()
{
    int array[5]={1,2,3,4,5};
    int i;

    printf("before function call\n");
    for(i=0;i<5;i++)
    {

        printf("\t%d",array[i]);
    }

    display(array);

    printf("\nafter function call\n");
    for(i=0;i<5;i++)
    {
        printf("\t%d",array[i]);
    }

    getch();
    return 0;
}

