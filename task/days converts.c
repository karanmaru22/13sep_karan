#include <stdio.h>
void main()
{
    int days,weeks,months;
    float years;
    printf("enter no days:");
    scanf("%d",&days);
    
    weeks=days/7;
    printf("\n weeks:%d",weeks);
    
    months=days/30;
    printf("\n months : %d",months);
    
    years=(float)days/365;
    printf("\n years: %.1f",years);
}