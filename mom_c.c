#include <stdio.h>

int main() {
  float a;
  printf("Введите целое градусов цельсия. а я вам выдам фаренгейты\n");
  scanf("%f", &a);
  printf("%.2f\n", (a * 9.0 / 5.0) + 32.0);
  return 0;
}
