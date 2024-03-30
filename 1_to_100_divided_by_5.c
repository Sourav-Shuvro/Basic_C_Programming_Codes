#include<stdio.h>
main()
{
    int number,i;
    scanf("%d",&i);
    for(number=1; number<=i; number++){
        if (number%5==0){
            printf("%d\n",number);
        }
    }
}
