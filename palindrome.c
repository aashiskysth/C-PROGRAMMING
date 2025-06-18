#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rev=0,rem,original;

    printf("Enter the number to check wheather it is palindrome or not?\n");
    scanf("%d",&num);

    original=num;

    do{
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }while(num!=0);

    if(rev==original)
    {
        printf("The given number is palindrome.");
    }
    else
    {
        printf("The given number is not palindrome.");
    }
    getch();
    return 0;
}
