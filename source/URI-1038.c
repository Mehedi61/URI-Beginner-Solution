// URI problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1038
// Programmed by MD. Mehedi Hasan

#include <stdio.h>

int main() {

  int t;
  float q;
  
  scanf("%d", &t);
  scanf("%f", &q);
  
  if(t == 1) {
      
    printf("Total: R$ %.2lf\n", (q * 4.0));
  }
  
  else if (t == 2) {
      
    printf("Total: R$ %.2lf\n", (q * 4.5));
    
  }
  
  else if (t == 3) {
      
    printf("Total: R$ %.2lf\n", (q * 5.0));
    
  }
  
  else if (t == 4) {
      
    printf("Total: R$ %.2lf\n", (q * 2.0));
    
  }
  
  else {
      
      printf("Total: R$ %.2lf\n", (q * 1.5));
      
  }
  
  return 0;
  
}
