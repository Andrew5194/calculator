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

int main(int argc, char *argv[]) {
  FILE *f;
  char buf[48];

  if(argc != 2){
    fprintf(stderr, "Must supply a text file\n");
    return -1;
  }
  f = fopen(argv[1], "r");
  if(f == NULL){
    fprintf(stderr, "Could not open %s\n", argv[1]);
    return -1;
  }
  if(fgets(buf, sizeof(buf), f) == NULL){
    fprintf(stderr, "Could not read from %s\n", argv[1]);
    return -1;
  }
  test_add();
  test_subtract();
  test_multiply();
  test_divide();
  number_game(atoi(buf));
  return 0;
}
