#include<stdio.h>
main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    if (a>b){
        printf("Number a is maximum.\n");
        printf("Number b is minimum.");
    }
    else{
        printf("Number b is maximum.\n");
        printf("Number a is minimum.");
    }
}

