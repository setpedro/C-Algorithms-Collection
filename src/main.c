#include "../include/searching.h"
#include "../include/sorting.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  int array[10] = {7, 43, 6, 75, 8, 2, 1, 80, 9, 14};
  int size = sizeof(array) / sizeof(array[0]);
  int target = 1999;

  printf("%i\n", linear_search(array, target, size));
}
