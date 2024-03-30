#include<stdio.h>
 int main()
 {
     char b;
     printf("Enter the char:\n");
     scanf("%c",&b);

     if(b>='A' && b<='Z')
     {
         printf("%c is UPPERCASE is alphabet",b);
     }
     else if(b>='a'&& b<='z')
     {
         printf("%c is LOWERCASE is alphabet",b);
     }
    else
            {
         printf("%c is NOT alphabet",b);
     }
 }
