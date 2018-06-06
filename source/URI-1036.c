// URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1036
// Programmed by MD. Mehedi Hasan

#include<stdio.h>
#include<math.h>

int main() {

    double a, b, c, R1, R2, del;
    scanf("%lf %lf %lf", &a, &b, &c);

    del = (b * b) - (4 * a * c);

    R1 = (- b + sqrt(del)) / (2 * a);
    R2 = (- b - sqrt(del)) / (2 * a);

    if(a != 0 && del > 0) {

        printf("R1 = %.5lf\n", R1);
	printf("R2 = %.5lf\n", R2);
	    
    }

    else {

        printf("Impossivel calcular\n");
	    
    }

    return 0;
    
}
