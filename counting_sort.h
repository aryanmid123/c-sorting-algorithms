#include <stdlib.h>

void counting_sort(int arr[], int n, int max_value) {
  int i;
  int* counts = calloc(max_value, sizeof(*counts));

  // Create array that holds number of counts
  for (i = 0; i < n; i++) {
    counts[arr[i]]++;
  }
  int outIndex = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < counts[i]; j++) {
      arr[outIndex++] = i;
    }
  }
  free(counts);
}