//sum,sub,multiple,division and remainder of two integer
#include<stdio.h>
int main(){
int a,b,result;
printf("Enter Two Number:");
scanf("%d %d",&a,&b);

result=a+b;
printf("SUM=%d\n",result);

result=a-b;
printf("SUB=%d\n",result);

result=a*b;
printf("MULTIPLE=%d\n",result);

result=a/b;
printf("DIVISION=%d\n",result);

result=a%b;
printf("REMAINDER=%d\n",result);

return 0;
}
