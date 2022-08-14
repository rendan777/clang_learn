// Вывод наименований пар стран через вызовы функций
#include <stdio.h>
void br();
void ic();

int main() {
  br();
  printf(", ");
  ic();
  printf("\n");
  ic();
  printf(",\n");
  br();
  printf("\n");
}

void ic() { printf("Индия, Китай"); }

void br() { printf("Бразилия, Россия"); }