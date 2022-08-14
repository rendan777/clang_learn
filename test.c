#include <stdio.h>

int main() {
  int i = 5;
  for (int g = 0; g < 100; g++) {
    i++;
    printf("%d\n\a", i);
  }
  return 0;
}