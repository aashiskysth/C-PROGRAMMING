#include<stdio.h>
#include<conio.h>

int remainder(int* a, int* b)
{
    int c = *a % *b;
    return c;

}


int main()
{
    int a,b,rem;
    printf("Enter any two number:\n");
    scanf("%d %d",&a,&b);

    rem=remainder(&a,&b);

    printf("The remainder of %d divided by %d = %d",a,b,rem);
}
