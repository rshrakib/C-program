#include<stdio.h>
#include <string.h>
int main()
{
int T,i,r,r2;
char s[101];

scanf("%d",&T);

for(i=1;i<=T;i++)
{
    scanf("%s",&s);

    r2= s[(strlen(s)-1)];

    if(r2%2==0)
      {
          printf("even\n");
     }
    else
    {
        printf("odd\n");
    }

}
return 0;

}
