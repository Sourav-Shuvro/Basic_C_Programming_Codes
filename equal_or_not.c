#include<stdio.h>
main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    if (a==b)
    {
        printf("This two number is equal",a,b);
    }
    else
    {
        printf("This two number is not equal");
    }
}
