#include<stdio.h>
int main()
{
    float a,b,area;
    printf("Enter base:");
    scanf("%f",&a);
    printf("Enter hight:");
    scanf("%f",&b);

    area=0.5*a*b;
    printf("Area of triangle:%.2f\n",area);
    return 0;

}
