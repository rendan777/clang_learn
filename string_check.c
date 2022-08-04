#include <stdio.h>
// выводит на выход количество строк в файле поданом на вход
int main() {
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n') ++nl;
  printf("%d\n", nl);
  return 0;
}