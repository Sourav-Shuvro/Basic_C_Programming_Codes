#include<stdio.h>
main()
{
    int number, i;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("Factors of %d are:",number);
    for (i=1; i<=number; i++)
    {
        if (number%i==0)
        {
            printf("%d\t",i);
        }
    }
}
