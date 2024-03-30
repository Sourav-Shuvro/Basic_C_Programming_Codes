#include<stdio.h>
main()
{
    float height,width,area,perimeter;
    printf("Enter height:");
    scanf("%f",&height);
    printf("Enter width:");
    scanf("%f",&width);
    area=(height*width);
    perimeter=2*(height+width);
    printf("Area is %.2f\nPerimeter is %.2f",area,perimeter);
}
