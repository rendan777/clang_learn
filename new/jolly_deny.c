// Работаем с вызовами функций внутри мейна.
#include <stdio.h>

void jolly();
void deny();

int main() {
  jolly();
  jolly();
  jolly();
  deny();
  return 0;
}

void jolly() { printf("Он веселый молодец!\n"); }

void deny() { printf("Никто не может это отрицать!\n"); }