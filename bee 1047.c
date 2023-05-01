#include<stdio.h>
int main()
{
    int a,b,c,d;
    int dif;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    dif=((c*60)+d)-((a*60)+b);
    if(dif<=0)
        dif +=24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",dif/60,dif%60);
    return 0;

}
