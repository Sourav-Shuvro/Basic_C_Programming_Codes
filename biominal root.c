#include<stdio.h>
main()
{
    float a,b,c,x1,x2;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    x1=(-b-sqrt(b*b-4*a*c))/(2*a);
    x2=(-b+sqrt(b*b-4*a*c))/(2*a);
    printf("x1=%.2f\nx2=%.2f",x1,x2);

}
