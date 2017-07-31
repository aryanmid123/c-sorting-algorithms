/*

Merge sort

Worst case performance: O(n log(n))
Best case performance: Ω(n log(n))
Average performance: Θ(n log(n))
Worst case space complexity: O(n)

*/

#include <stdlib.h>

void merge(
    int* arr, int* left_arr, int left_count, int* right_arr, int right_count) {
  int i, j, k;

  i = 0;
  j = 0;
  k = 0;

  while (i < left_count && j < right_count) {
    if (left_arr[i] < right_arr[j])
      arr[k++] = left_arr[i++];
    else
      arr[k++] = right_arr[j++];
  }
  while (i < left_count) arr[k++] = left_arr[i++];
  while (j < right_count) arr[k++] = right_arr[j++];
}

void merge_sort(int arr[], int n) {
  int mid, i, *L, *right_arr;
  if (n < 2) return;
  mid = n / 2;

  L = (int*)malloc(mid * sizeof(int));
  right_arr = (int*)malloc((n - mid) * sizeof(int));

  for (i = 0; i < mid; i++) L[i] = arr[i];
  for (i = mid; i < n; i++) right_arr[i - mid] = arr[i];

  merge_sort(L, mid);
  merge_sort(right_arr, n - mid);
  merge(arr, L, mid, right_arr, n - mid);
  free(L);
  free(right_arr);
}
