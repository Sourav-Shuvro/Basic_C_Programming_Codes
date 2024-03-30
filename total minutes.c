#include<stdio.h>
main()
{
    int hour,minutes,total;
    printf("Enter a:\nEnter b:");
    scanf("%d %d",&hour,&minutes);
    hour=hour*60;
    total=hour+minutes;
    printf("%d",total);

}
