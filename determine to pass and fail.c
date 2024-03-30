#include<stdio.h>

      int main()
{
      int a,b,c;
          printf("Enter the number a:");
          scanf("%d",&a);
          printf("Enter the number b:");
          scanf("%d",&b);
          c=(a+b)/2;
      if (c>=50)
      {
        printf("Enter the grade is pass",c);
      }
     else
     {
         printf("Enter the grade is fail",c);
     }
}
