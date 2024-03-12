#include <stdio.h>

int main(void) {
  char name[10];
  double salary_fix, total_sell, bonus, commission;

  scanf("%s", name);

  scanf("%lf", &salary_fix);

  scanf("%lf", &total_sell);

  bonus = total_sell * 0.15;
  commission = (salary_fix + bonus);

  printf("TOTAL = R$ %.2lf\n", commission);
  
  return 0;
}
