//sum and average with array
#include<stdio.h>
int main ()
{
 int i,j,sum,a[5];
 for(i=0;i<5;i++)
 {
     scanf("%d",&a[i]);

 }
 for(j=0;j<5;j++)
     {
         sum=sum+a[j];

     }
      printf("Sum = %d\n",sum);
      printf("Avg = %2.f\n", (float)sum/5);


   return 0;
}
