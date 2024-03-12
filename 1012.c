#include <stdio.h>

int main(void) {
  double A, B, C;
  double pi = 3.14159;
  double at, ac, atrap, aq, aret;
  
  scanf("%lf %lf %lf", &A, &B, &C);

  at = A * C / 2;
  ac = pi * (C * C);
  atrap = (A + B) * C / 2;
  aq = B * B;
  aret = A * B;

  printf("TRIANGULO: %.3lf\n", at);
  printf("CIRCULO: %.3lf\n", ac);
  printf("TRAPEZIO: %.3lf\n", atrap);
  printf("QUADRADO: %.3lf\n", aq);
  printf("RETANGULO: %.3lf\n", aret);
  
  return 0;
}
