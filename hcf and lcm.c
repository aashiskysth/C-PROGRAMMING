#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,temp,hcf,lcm;
    printf("Enter any two number to find hcf and lcm:\n");
    scanf("%d %d",&a,&b);
    a=c;
    b=d;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=a;
    lcm=(c*d)/hcf;
    printf("The HCF is %d",hcf);
    printf("\nThe LCM is %d",lcm);

}
