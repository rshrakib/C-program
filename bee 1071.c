#include<stdio.h>
int main ()
{
    int x,y,i,sum=0,max,min;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        max=x;
        min=y;
    }
    else
    {
        max=y;
        min=y;
    }
    for(i=(min+1);i<max;i++)
    {
        if(i%2!=0)
            sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
