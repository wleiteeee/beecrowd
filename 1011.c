#include <stdio.h>

int main(void) {
  double raio, volume;
  double pi = 3.14159;

  scanf("%lf", &raio);

  volume = (4/3.0) * pi * (raio * raio * raio);

  printf("VOLUME = %.3lf\n", volume);
  
  return 0;
}
