#include <stdio.h>
void main()
{
    int x;
    printf("Enter the year : ");
    scanf("%d",&x);
    if(x%4==0)
    {
        printf("\nLeap Year");
    }
    else
    {
        printf("\nNot a Leap Year");
    }
}