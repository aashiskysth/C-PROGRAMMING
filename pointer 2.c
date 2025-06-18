#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5]={10,20,30,40,50},i;
    for(i=0;i<5;i++)
    {
        printf("\n arr[%d]\t\t%d\t %u",i,*(arr+i),arr+i);
    }
    getch();
    return 0;
}
