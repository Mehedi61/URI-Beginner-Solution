// URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1009
// Programmed by MD. Mehedi Hasan
#include <stdio.h>
int main()
{
    char ch[10];
    double salary,sold,bonus=15,TOTAL;
    scanf("%s",&ch);
    scanf("%lf",&salary);
    scanf("%lf",&sold);
    TOTAL=salary+(bonus*sold)/100;
    printf("TOTAL = R$ %0.2lf\n",TOTAL);
    return 0;
}