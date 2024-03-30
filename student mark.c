#include<stdio.h>
 int main()
 {
     int mark1,mark2,mark3,mark4,mark5,total;
     float percentage;

     printf("Enter 5 subject marks of a student:\n");
     scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
     total=mark1+mark2+mark3+mark4+mark5;
     percentage=(total*100)/1000;
     printf("The percentage mark is%f",percentage);
 }
