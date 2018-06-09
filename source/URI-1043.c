// URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1043
// Programmed by MD. Mehedi Hasan

#include <stdio.h>

int main()
{
  float a, b, c;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  float x = b - c;
  if(x < 0) {
    x = -x;
  }
  if(x < a && a < (b + c)) {
    printf("Perimetro = %0.1lf\n", (a + b + c));
  }
  else {
    printf("Area = %0.1lf\n", ((a + b) * c) / 2);
  }
  return 0;
}
