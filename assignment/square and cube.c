#include<stdio.h>
void main()
{
    int no,square,cube;
    
    printf("enter a number:");
    scanf("%d",&no);
    
    square = no*no;
    cube=no*no*no;
    
    printf("square of no:%d",no,square);
    printf("cube of no:%d",no,cube);
    
    return 0;
}