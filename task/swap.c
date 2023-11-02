#include <stdio.h>
void main()
{
    int a,b;
    printf(" enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    
    printf("before swap: \nvalue of a is:%d \nvalue of b is:%d",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\nafter swap: \nvalue of a is:%d \nvalue of b is:%d",a,b);
}