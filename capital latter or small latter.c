#include<stdio.h>
main()
{
    char ch;
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("It is Capital Latter");

    else if(ch>='a' && ch<='z')
        printf("It is Small Latter");

    else
        printf("It is not Latter");

    return 0;

}
