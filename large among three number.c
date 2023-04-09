#include<stdio.h>
main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
        printf("Large = %d",a);
    else if(b>a && b>c)
         printf("Large = %d",b);
    else if (c>a && c>b)
         printf("Large = %d",c);
    else
        printf("Equal");
    return 0;
}
