#include<stdio.h>
main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Vowel\n");
    }
    else if(ch=='y')
    {

        printf("semi-consonent\n");
    }

    else
    {
        printf("consonent\n");
    }
    return 0;
}
