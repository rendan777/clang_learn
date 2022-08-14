//Вызов функции в функции
#include <stdio.h>

void one_three();
void two();

int main() {
  printf("начинаем:\n");
  one_three();
  printf("порядок!\n");
}

void one_three() {
    printf("один\n");
  two();
  printf("три\n");
}

void two() { printf("два\n"); }