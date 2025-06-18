#include<stdio.h>
#include<conio.h>
int main()
{
    int days,month,year;
    printf("Enter days :");
    scanf("%d",&days);
    year=days/365;
    days=days%365;
    month=days/30;
    days=days%30;
    printf("\n year=%d  month=%d  days=%d",year,month,days);
    return 0;
}
