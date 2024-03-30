#include<stdio.h>
main()
{
    int num,sum;
    for (num=1; num<=100; num=num+2)
{
        sum=sum+num;
    }
    printf("%d",sum);
}
