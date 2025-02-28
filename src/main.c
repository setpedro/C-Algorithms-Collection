#include "../include/searching.h"
#include "../include/sorting.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  int array[10] = {7, 43, 6, 75, 8, 2, 1, 80, 9, 14};
  int size = sizeof(array) / sizeof(array[0]);

  selection_sort(array, size);

  for (int i = 0; i < size; i++) {
    printf("%i\n", array[i]);
  }
}
