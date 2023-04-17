#include<stdio.h>
main()
{
    char s[30];
    int i;

    printf("Enter your name:");
    gets(s);

    printf("\nYour Full Name is: %s\n",s);


    //print single character of a sting.
     printf("\nSingle Character: \n");
    while(s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
//print string length..
    printf("\nString Length: %d",i);

//string length using library function
int len;
len=strlen(s);
 printf("\nString Length with library function: %d",len);

    getch();
}
