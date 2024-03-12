#include <stdio.h>

int main(void) {
  int distance;
  float fuel, consume;

  scanf("%d", &distance);

  scanf("%f", &fuel);

  consume = distance / fuel;

  printf("%.3f km/l\n", consume);
  
  return 0;
}
