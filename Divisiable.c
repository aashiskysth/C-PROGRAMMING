#include<stdio.h>
int main()
 {
int a;
printf("Enter a numbers:\n");
scanf("%d",&a);

if(a%2==0 && a%5==0)
{
    printf("%d the number is divisible by both",a);
}
else{
 printf("%d the number is not divisible by both",a);

}

return 0;
}
