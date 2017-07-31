/*

Counting sort

Worst case performance: O(n+k)
Best case performance: Ω(n+k)
Average performance: Θ(n+k)
Worst case space complexity: O(n+k)

*/

#include <stdlib.h>

void counting_sort(int arr[], int n, int max_value) {
  int i;
  int* counts = (int*)calloc(max_value, sizeof(*counts));

  // Create array that holds number of counts
  for (i = 0; i < n; i++) {
    counts[arr[i]]++;
  }

  int out_index = 0;

  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < counts[i]; j++) {
      arr[out_index] = i;
      out_index++;
    }
  }

  free(counts);
}
