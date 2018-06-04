// URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1010
// Programmed by MD. Mehedi Hasan
#include <stdio.h>
int main()
{
    float product1,unit1,price1,product2,unit2,price2,total;
    scanf("%f %f %f",&product1,&unit1,&price1);
    scanf("%f %f %f",&product2,&unit2,&price2);
    total=(unit1*price1)+(unit2*price2);
    printf("VALOR A PAGAR: R$ %0.2f\n",total);
    return 0;
}