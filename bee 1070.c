#include<stdio.h>
int main()
{
    int X,i,count=0;
    scanf("%d",&X);
    for(i=X;i<=X*5;i++)
    {
        if(i%2!=0)
           {

            printf("%d\n",i);
            count++;
           }
 if(count==6)
            break;

    }

    return 0;
}
