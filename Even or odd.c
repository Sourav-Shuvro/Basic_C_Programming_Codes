#include<stdio.h>
main()
{
    int n;
    printf("Ente the number:");
    scanf("%d", &n);
    if ((n %2) == 0)
    printf("The number %d is even", n);
    else
    printf("The number %d is odd", n);

}
