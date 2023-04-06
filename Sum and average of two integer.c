//sum and average of two integer
#include<stdio.h>
int main()
{
    int a,b,sum;
    float avg;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum=%d\n",sum); //\n is used for new line
    avg=(float)sum/2; //type casting integer to float by using (float)
    printf("Average=%.3f",avg);
    return 0;
}
