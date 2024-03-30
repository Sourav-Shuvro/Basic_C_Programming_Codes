#include<stdio.h>
#define pi 3.14
main()
{
    float r,perimeter;
    printf("Enter radius:");
    scanf("%f",&r);
    perimeter=2*pi*r;
    printf("The perimeter is %.2f",perimeter);
}
