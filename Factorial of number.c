#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter the numbers:\n");
    scanf("%d",&number);
    printf("Factors of %d is:\n",number);

    for(i=1;i<=number;i++)
    {
        if(number%i==0)
       {
            printf("%d \i",i);
            }

    }
}
