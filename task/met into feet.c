#include <stdio.h>
void main()
{
    float meter,feet;
    printf(" enter meter:");
    scanf("%f",&meter);
    
    feet=meter*3.28;
    
    printf("feet:%.2f",(float)feet);
}