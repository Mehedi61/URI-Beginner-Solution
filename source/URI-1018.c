// Programmed by MD. Mehedi Hasan
#include <stdio.h>
int main() {
	int N, N100, N50, N20, N10, N5, N2, N1, r1, r2, r3, r4, r5, r6;
	scanf("%d", &N);
	if (0 < N < 1000000) {
		N100 = N /100;
		r1 = N % 100;
		N50 = r1 / 50;
		r2 = r1 % 50;
		N20 = r2 / 20;
		r3 = r2 % 20;
		N10 = r3 / 10;
		r4 = r3 % 10;
		N5 = r4 / 5;
		r5 = r4 % 5;
		N2 = r5 / 2;
		N1 = r5 % 2;
	}
	printf("%d\n", N);
	printf("%d nota(s) de R$ 100,00\n", N100);
	printf("%d nota(s) de R$ 50,00\n", N50);
	printf("%d nota(s) de R$ 20,00\n", N20);
	printf("%d nota(s) de R$ 10,00\n", N10);
	printf("%d nota(s) de R$ 5,00\n", N5);
	printf("%d nota(s) de R$ 2,00\n", N2);
	printf("%d nota(s) de R$ 1,00\n", N1);
	return 0;
}