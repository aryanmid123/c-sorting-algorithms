/*

Pancake sort

Worst case performance: O(n^2)
Worst case space complexity: O(n)

*/

#include <stdlib.h>

void flip(int arr[], int i) {
  int temp, start = 0;
  while (start < i) {
    temp = arr[start];
    arr[start] = arr[i];
    arr[i] = temp;
    start++;
    i--;
  }
}

int find_max(int arr[], int n) {
  int mi, i;
  for (mi = 0, i = 0; i < n; ++i)
    if (arr[i] > arr[mi]) mi = i;
  return mi;
}


int pancake_sort(int* arr, int n) {
  for (int curr_size = n; curr_size > 1; --curr_size) {
    int mi = find_max(arr, curr_size);
    if (mi != curr_size - 1) {
      flip(arr, mi);

      flip(arr, curr_size - 1);
    }
  }
}