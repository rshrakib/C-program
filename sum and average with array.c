//sum and average with array
#include<stdio.h>
int main ()
{
 int n,i,j,sum,a[100];
 printf("How many number you want to input: ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);

 }
 for(j=0;j<n;j++)
     {
         sum=sum+a[j];

     }
      printf("Sum = %d\n",sum);
      printf("Avg = %.2f\n", (float)sum/n);


   return 0;
}
