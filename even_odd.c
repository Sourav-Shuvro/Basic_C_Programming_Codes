#include<stdio.h>
main()
{
    int number;
    printf("Enter The Number:");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf("The number is Even",number);
    }
    else
    {
        printf("The number is Odd");
    }
}
