// URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1041
// Programmed by MD. Mehedi Hasan

#include <stdio.h>

int main()
{

  float x,y;
  scanf("%f %f", &x, &y);
  
  if (x==0 && y==0) {
    printf("Origem\n");
  }
  
  else if (x==0) {
    printf("Eixo Y\n");
  }
  
  else if (y==0) {
    printf("Eixo X\n");
  }
  
  else if (x>0 && y>0) {
    printf("Q1\n");
  }
  
  // Q2
  else if(x<0 && y>0) {
    printf("Q2\n");
  }
  
  else if (x<0 && y<0) {
    printf("Q3\n");
  }
  
  else {
      printf("Q4\n");
  }
  
  return 0;
  
}
