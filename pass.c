#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    c=(a+b)/2;
    if (c>=50){
        printf("The grade is pass",c);
    }
    else
        printf("The grade is fail");
}
