#include<stdio.h>
int main()
{
    char s1[15]="Rakibul";
    char s2[15]="Hasan";
    char temp[15];

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("s1= %s\n",s1);
     printf("s2= %s",s2);

     getch();
}
