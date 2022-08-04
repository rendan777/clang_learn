#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
// выводит фаренгейты и цельсии. шаг фаренгейтов начинается с 300 градусов. Вся
// математика в отдельной функции.

void func(float *fahr);

int main() {
  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    float cels;
    cels = fahr;
    func(&cels);
    printf("%3d %6.1f\n", fahr, cels);
  }
  return 0;
}

void func(float *fahr) {
  int grad;
  *fahr = (5.0 / 9.0) * (*fahr - 32);
}