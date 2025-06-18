
//Write a program to illustrate the memory locations allocated by each array elements.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a[]={10.4,45.9,5.5,0,10.6};
    int i;
    printf("The continuous memory locations are:\n");
    for(i=0;i<5;i++)
        {
            printf("\t %u",&a[i]);
        }
    getch();
    return 0;
}
