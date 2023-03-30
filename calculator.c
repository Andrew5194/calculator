#include <stdio.h>
#include <assert.h>

int add(int x, int y) {
  return x + y;
}

int subtract(int x, int y) {
  return x - y;
}

int multiply(int x, int y) {
  return x * y;
}

int divide(int x, int y) {
  return x / y;
}

void number_game(int x) {
  if (divide(1000,x) > 1) {
    if (subtract(x,2) < 50) {
      if(divide(multiply(x,x), 3) == 12) {
        printf("%d is correct! Here is your bug!\n",  x);
        assert(0);
      }
    }
  }
  printf("Incorrect :(\n");
}
