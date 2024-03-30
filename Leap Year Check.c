#include<stdio.h>
int main()
{
    int year;
    printf("Inter a year:-");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if(year%100 == 0)
    {
        if(year%400 == 0)
            printf("%d It's a leap year.", year);
        else
            printf("%d It's not a leap year.", year);
    }
    else
        printf("%d It's leap year.", year);
    }
    else
        printf("%d It's not a leap year.", year);

    return 0;
}
