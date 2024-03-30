#include<stdio.h>
main()
{
    int s;
    printf("Enter your score:");
    scanf("%d",&s);
    printf("Your mark is %d and ",s);
    if (s>=80 && s<=100)
        printf("Your grade is A+");
        else if (s>=70 && s<=80)
        printf("Your grade is A");
        else if (s>=60 && s<=70)
        printf("Your grade is A-");
        else if (s>=50 && s<=60)
        printf("Your grade is B");
        else if (s>=40 && s<=50)
        printf("Your grade is c");
        else if (s>=33 && s<=40)
        printf("Your grade is D");
        else
        printf("Your grade is F");
}
