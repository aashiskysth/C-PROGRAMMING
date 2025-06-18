#include<stdio.h>
#include<conio.h>
int main()
{
    float marks[10],avg,dev,sum=0;

    printf("Enter the marks of 10 student:\n");

    for(i=0;i<10;i++)
    {
        printf("Enter the mark of %dth student:\n",i);
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }

    avg=sum/10;
    printf("The average marks is %f:\n",avg);

    printf("The deviation of each student from average is\n");
    for(i=0;i<10;i++)
    {
        dev=marks[i]-avg;
        printf("Marks of %d student=%f and deviation=%f",i,marks[i],dev);
    }
    getch();
    return 0;

}

