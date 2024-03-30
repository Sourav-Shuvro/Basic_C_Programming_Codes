#include<stdio.h>
main()
{
    int num,sum=0;
    for (num=2; num<=100; num=num+2){
        sum=sum+num;
    }
    printf("%d",sum);
}
