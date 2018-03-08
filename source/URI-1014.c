// Programmed by MD. Mehedi Hasan
#include <stdio.h>
int main()
{
    double distance,fuel,km;
    scanf("%lf",&distance);
    scanf("%lf",&fuel);
    km=distance/fuel;
    printf("%0.3lf km/l\n",km);
    return 0;
}