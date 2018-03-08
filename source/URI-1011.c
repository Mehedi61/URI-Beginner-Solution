// Programmed by MD. Mehedi Hasan
#include <stdio.h>
#include <math.h>
int main()
{

    double R,pi=3.14159,VOLUME;
    scanf("%lf",&R);
    VOLUME=4.0/3.0*pi*pow(R,3);
    printf("VOLUME = %0.3lf\n",VOLUME);
    return 0;
}