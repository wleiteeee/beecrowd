#include <stdio.h>

int main(void) {
  int nfunc, ht;
  float valueh, salary;

  scanf("%d", &nfunc);

  scanf("%d", &ht);

  scanf("%f", &valueh);

  salary = ht * valueh;

  printf("NUMBER = %d\n", nfunc);
  printf("SALARY = U$ %.2f\n", salary);
  
  return 0;
}
