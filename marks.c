#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    float e,n,m,s,c,total,percent;
    printf("Enter the name of student:\a \n");
    scanf("%s",name);
    printf("Enter the marks obtained in seven subject:\n");
    scanf("%f %f %f %f %f",&e,&n,&m,&s,&c);
    total=e+n+m+s+c;
    percent=total/5;
    printf("The percent is=%f",percent);
    return 0;
}
