#include <stdio.h>
// аналог cat. Выводит на выход то что подано из файла на вход
int main() {
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}
