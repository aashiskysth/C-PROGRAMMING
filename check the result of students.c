#include<stdio.h>
#include<conio.h>
int main()
{
    float s1,s2,s3,s4,s5,s6,s7,percentage;
    printf("Enter the mark of seven subjects:\n");
    scanf("%f %f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
    percentage=(s1+s2+s3+s4+s5+s6+s7)/7;
    printf("His/her percentage is %f \n",percentage);

    if(percentage>=80)
    {
        printf("He/she got dictintion");
    }

    else if(percentage>=60 && percentage<70)
    {
        printf("He/she got first division");
    }

    else if(percentage>=45 && percentage<60)
    {
        printf("He/she got second division");
    }

    else if(percentage>=32 && percentage<45)
    {
        printf("He/she got third division");
    }

    else
    {
        printf("He/she failed in exam");
    }
    getch();
    return 0;
}
