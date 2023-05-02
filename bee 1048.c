#include<stdio.h>
int main()
{
    double a;
    char ch='%';
    scanf("%lf",&a);

    if(a<=400.00)
    {
        printf("Novo salario: %.2lf\n",(a+((a*15)/100)));
        printf("Reajuste ganho: %.2lf\n",((a*15)/100));
        printf("Em percentual: 15 %c\n",ch);
    }

   else if(400.01<=a && a<=800.00)
    {
        printf("Novo salario: %.2lf\n",(a+((a*12)/100)));
        printf("Reajuste ganho: %.2lf\n",((a*12)/100));
        printf("Em percentual: 12 %c\n",ch);
    }
    else if(800.01<=a && a<=1200.00)
    {
        printf("Novo salario: %.2lf\n",(a+((a*10)/100)));
        printf("Reajuste ganho: %.2lf\n",((a*10)/100));
        printf("Em percentual: 10 %c\n",ch);
    }
    else if(1200.01<=a && a<=2000.00)
    {
        printf("Novo salario: %.2lf\n",(a+((a*7)/100)));
        printf("Reajuste ganho: %.2lf\n",((a*7)/100));
        printf("Em percentual: 7 %c\n",ch);
    }
    else if(a>2000.00)
    {
        printf("Novo salario: %.2lf\n",(a+((a*4)/100)));
        printf("Reajuste ganho: %.2lf\n",((a*4)/100));
        printf("Em percentual: 4 %c\n",ch);
    }
    return 0;
}
