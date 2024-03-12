#include <stdio.h>

int main(void) {
  int cod_p, num_p, cod_p2, num_p2;
  double unit_p, unit_p2, total;

  scanf("%d %d %lf", &cod_p, &num_p, &unit_p);

  scanf("%d %d %lf", &cod_p2, &num_p2, &unit_p2);

  total = ((num_p * unit_p) + (num_p2 * unit_p2));
  
  printf("VALOR A PAGAR: R$ %.2lf\n", total);
  
  return 0;
}
