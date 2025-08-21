#include "../include/searching.h"

int linear_search(int array[], int target, int size) {
  for (int i = 0; i < size; i++) {
    if (array[i] == target) {
      return i;
    }
  }
  return -1;
}

int binary_search(int array[], int target, int size) {
  int leftIdx = 0, rightIdx = size - 1;

  while (leftIdx < rightIdx) {
    int middleIdx = leftIdx + (rightIdx - leftIdx + 1) / 2;

    if (target < array[middleIdx]) {
      rightIdx = middleIdx - 1;
    } else {
      leftIdx = middleIdx;
    }
  }

  return array[leftIdx] == target ? leftIdx : -1;
}
