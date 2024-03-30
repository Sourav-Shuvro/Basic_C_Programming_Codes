#include<stdio.h>
main()
{
    float c,f;
    printf("Input Centigrade Temperature:");
    scanf("%f",&c);
    f=(9*c+160)/5;
    printf("The farenheit Temperature is %.2f",f);
}
