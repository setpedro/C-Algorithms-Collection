#include "../include/searching.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  int array[10] = {3, 17, 25, 42, 56, 71, 89, 102, 115, 130};
  int target = 115;
  int size = sizeof(array) / sizeof(array[0]);

  int match = binary_search(array, target, size);
  printf("%i\n", match);
}
