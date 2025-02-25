#include <stdio.h>

int binary_search(int array[], int target, int size) {
  int leftIdx = 0, rightIdx = size - 1;

  while (leftIdx < rightIdx) {
    int middleIdx = leftIdx + (rightIdx - leftIdx + 1) / 2;
    printf("%i\n", middleIdx);

    if (target < array[middleIdx]) {
      rightIdx = middleIdx - 1;
    } else {
      leftIdx = middleIdx;
    }
  }

  return array[leftIdx] == target ? leftIdx : -1;
}

int main(int argc, char *argv[]) {
  int array0[10] = {3, 17, 25, 42, 56, 71, 89, 102, 115, 130};
  int array[1] = {1};
  int target = 1;
  int size = sizeof(array) / sizeof(array[0]);

  int match = binary_search(array, target, size);
  printf("%i\n", match);
}
