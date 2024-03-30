#include<stdio.h>
main()
{
    int ID;
    float worked_hour_of_a_month,amount_per_hour,Total_salary;
    printf("Enter ID:");
    scanf("%d",&ID);
    printf("Enter worked_hour_of_a_moth:");
    scanf("%f",&worked_hour_of_a_month);
    printf("Enter amount_per_hour:");
    scanf("%f",&amount_per_hour);
    Total_salary=worked_hour_of_a_month*amount_per_hour;
    printf("\nEmployees ID No. is %d\nHis salary is %.2f",ID,Total_salary);

}
