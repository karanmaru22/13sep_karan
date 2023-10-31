#include <stdio.h>
void main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("\n addition is: %d",a+b);
    printf("\n substraction is:%d",a-b);
    printf("\n multiplication is:%d",a*b);
    printf("\n division is :%.1f",(float)a/(float)b);
    printf("\n modulo is : %d",a%b);
}