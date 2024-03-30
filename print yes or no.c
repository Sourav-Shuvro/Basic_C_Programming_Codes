#include<stdio.h>
 int main()
{
     int number,i,sum=0;
     printf("Enter the number:\n");
     scanf("%d",&number);

     for(i=1;i<=(number-1);i++)

     {
         if(number%i==0)
         {(sum=sum+i);}
         if(sum==number)
         {
             printf("Yes");
         }
         else
         {
             printf("NO");
         }
     }
}
