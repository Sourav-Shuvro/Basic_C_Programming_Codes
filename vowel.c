#include<stdio.h>
main()
{
    char x;
    printf("Enter the Digit:");
    scanf("%c",&x);
    printf("Your given character is %c\n",x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
     printf("It is a vowel");
    }
    else if (x=='0'||x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'){
        printf("It is a digit");
    }
    else
        printf("It is a consonant");
    }

