#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "calculator.h"

void test_add() {
  assert(add(1, 2) == 3);
  assert(add(0, 2) == 2);
}

void test_subtract() {
  assert(subtract(1, 2) == -1);
  assert(subtract(4, 2) == 2);
}

void test_multiply() {
  assert(multiply(2, 2) == 4);
  assert(multiply(2, 0) == 0);
}

void test_divide() {
  assert(divide(0, 3) == 0);
  assert(divide(4,2) == 2);
}

int main() {
  char str[32];
  gets(str);
  test_add();
  test_subtract();
  test_multiply();
  test_divide();
  number_game(atoi(str));
  return 0;
}
