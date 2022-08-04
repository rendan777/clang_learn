#include <stdio.h>
//выводит на выход количество символов в файле который был подан на вход
int main() {
  double nc;
  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
  return 0;
}