#include<stdio.h>
#include<conio.h>

struct student
{
  char name[20];
  int roll;
  float mark;
};

struct student s[5];

int main()
{
    int i;

    printf("For input:\n");
    printf("Enter Name, roll_no, mark of 5 student respectively:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s %d %f",s[i].name,&s[i].roll,&s[i].mark);
    }


    printf("The output:\n");
    for(i=0;i<5;i++)
    {
        if(s[i].mark > 50)
        {
            printf("Name = %s \n Roll no = %d \n Mark = %f \n",s[i].name,s[i].roll,s[i].mark);
        }

    }

    getch ();
    return 0;
}
