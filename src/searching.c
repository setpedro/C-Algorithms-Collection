#include "../include/searching.h"

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
