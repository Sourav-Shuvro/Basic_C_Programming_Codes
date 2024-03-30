#include<stdio.h>
main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if (age<=18){
        printf("You Will be Given vote");
    }
    else
        printf("You will not given Vote");
}
