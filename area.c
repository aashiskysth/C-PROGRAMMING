#include<stdio.h>
#include<conio.h>
#define pi 3.1415
int main()
{
  float r1,r2,A1,A2,A;
  printf("Enter radius of 1st circle:\n");
  scanf("%f",&r1);
  printf("Enter radius of 2nd circle:\n");
  scanf("%f",&r2);
  A1=pi*r1*r1;
  A2=pi*r2*r2;
  A=A1-A2;
  printf("The Area is=%.2f",A);
  return 0;
}
