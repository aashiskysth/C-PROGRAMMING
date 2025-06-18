#include<stdio.h>
int main() {
float billAmount, units;
printf("Enter Electricity Units:");
scanf("%f",&units);
if(units<=20)
    bill Amount =80.0;
if(units>20 && units<=120)
    bill Amount=80.0+7.30*(units-20);
else
    bill Amount=9.0* units;
printf("The bill Amount is: %.2f",billAmount);
getch();
return 0;
}
