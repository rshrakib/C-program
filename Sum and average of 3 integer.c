//Sum and Average of three integer number

#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    scanf("%d %d %d",&a,&b,&c);

    sum=a+b+c;
    avg=(float)sum/3;//tyoe casting

    printf("Sum=%d\nAverage=%.3f\n",sum,avg);
    return 0;
    }
