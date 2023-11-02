#include <stdio.h>
void main()
{
    int no;
    printf("enter a number:");
    scanf("%d",&no);
    
    if(no%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}