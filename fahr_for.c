#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
// выводит фаренгейты и цельсии. шаг фаренгейтов начинается с 300 градусов. Вся
// математика в отдельной функции.
float func(int fahr);

int main() {
  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3d %6.1f\n", fahr, func(fahr));
  }
  return 0;
}

float func(int fahr) {
  int grad;
  grad = (5.0 / 9.0) * (fahr - 32);
  return grad;
}