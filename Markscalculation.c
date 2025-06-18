#include<stdio.h>
#include<conio.h>
int main() {
float nep, eng, math, phys, chem, bio , comp, percent;
printf("Enter the marks in 7 subjects:");
scanf("%f%f%f%f%f%f%f", &nep, &eng, &math, &phys, &chem, &bio, &comp);
percent = (nep+eng+math+phys+chem+bio+comp)/7;
if(percent>=80)
  printf("Distinction");
else if(percent >=60 && percent <80)
{
  printf("First division");
}
else if(percent >=45 && percent <60)

{
    printf("second division");
}
else if(percent >=32 && percent <45)
{
  printf("Third division");
}
else
{
  printf("fail");
  printf("\nYours Percentage is: %f", percent);
}
  getch();
  return 0;
  }

