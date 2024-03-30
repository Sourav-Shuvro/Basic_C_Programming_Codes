#include<stdio.h>
main()
{
    float a,b,c;
    printf("Enter a:");
    scanf("%f",&a);
    for (b=1; b<=10; b++)
    {
        c=a*b;
        printf("%.2f * %.2f = %.2f\n",a,b,c);
    }
}
