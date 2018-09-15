// Problem Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1165
// Programmed by MD. Mehedi Hasan(github.com/Mehedi61)

#include <stdio.h>
int main()
{
    int i, j, prime, repeat, k=0;
    scanf("%d", &repeat);

    for(i = 0; i < repeat; i++) {
        scanf("%d",&prime);

        if (prime == 2) printf("%d eh primo\n", prime);
		    else if (prime == 1) printf("%d nao eh primo\n", prime);
        else if (prime > 2) {
	          for (j = 2; j < prime; j++) {
                if(prime%j == 0) {
                    k=2;
                    break;
            }
            else k=1;
    	}
       if (k==2) printf("%d nao eh primo\n", prime);
       else if (k==1) printf("%d eh primo\n", prime);
        }
    }
    return 0;
}
