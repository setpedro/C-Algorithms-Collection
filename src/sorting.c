#include "../include/sorting.h"
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int array[], int size) {
  int is_sorted = 0;
  int last_swap = size - 1;

  while (!is_sorted) {
    int swaps_made = 0;
    int new_last = last_swap;

    for (int i = 0; i < last_swap; i++) {
      int temp_a = array[i];

      if (temp_a > array[i + 1]) {
        swaps_made++;
        array[i] = array[i + 1];
        array[i + 1] = temp_a;
        new_last = i + 1;
      }
    }

    if (swaps_made > 0) {
      last_swap = new_last;
    }
    if (swaps_made == 0) {
      is_sorted = 1;
    }
  }
}

void selection_sort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int min_idx = i;

    for (int j = i + 1; j < size; j++) {
      if (array[min_idx] > array[j]) {
        min_idx = j;
      }
    }

    if (min_idx != i) {
      int temp = array[i];
      array[i] = array[min_idx];
      array[min_idx] = temp;
    }
  }
}

void merge(int array[], int start, int mid, int end) {
  int *temp = malloc((end - start + 1) * sizeof(int));

  int left_idx = start;
  int right_idx = mid + 1;
  int k = 0;

  while (left_idx <= mid && right_idx <= end) {
    if (array[left_idx] <= array[right_idx]) {
      temp[k] = array[left_idx];
      left_idx++;
    } else {
      temp[k] = array[right_idx];
      right_idx++;
    }
    k++;
  }

  while (left_idx <= mid) {
    temp[k] = array[left_idx];
    left_idx++;
    k++;
  }

  while (right_idx <= end) {
    temp[k] = array[right_idx];
    right_idx++;
    k++;
  }

  for (int i = 0; i < end - start + 1; i++) {
    array[start + i] = temp[i];
  }

  free(temp);
}

void merge_sort(int array[], int start, int end) {
  if (start >= end)
    return;

  int mid = (start + end) / 2;

  merge_sort(array, start, mid);
  merge_sort(array, mid + 1, end);

  merge(array, start, mid, end);
}
