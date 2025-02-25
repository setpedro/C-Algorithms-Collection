#include <stdio.h>

int TARGET = 71;

int binary_search(int array[], int size) { return -1; }

int main(int argc, char *argv[]) {
  int array[10] = {3, 17, 25, 42, 56, 71, 89, 102, 115, 130};
  int size = sizeof(array) / sizeof(array[0]);

  int match = binary_search(array, size);
  printf("match: %i\n", match);
}
