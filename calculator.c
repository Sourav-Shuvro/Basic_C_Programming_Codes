#include<stdio.h>
main()
{
    float a,b,sum,sub,mul,div;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("The sum is %.2f\nThe sub is %.2f\nThe mul is %.2f\nThe div is %.2f",sum,sub,mul,div);
}
