#include<stdio.h>
main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        printf("Lerge:%d\n",a);
        printf("Small:%d\n",b);
    }
    else if(b>a)
    {
        printf("Lerge:%d\n",b);
        printf("Small:%d\n",a);
    }
    else
    {

        printf("Equal\n");
    }
    return 0;
}
