/*

Bogo sort

Worst case performance: O((n+1)!)
Best case performance: Ω(n)
Average performance: Θ((n+1)!)
Worst case space complexity: O(n)

*/

#include <stdbool.h>
#include <stdlib.h>

bool is_sorted(int arr[], int n) {
  while (--n >= 1) {
    if (arr[n] < arr[n - 1]) return false;
  }
  return true;
}

void shuffle(int arr[], int n) {
  int i, t, r;
  for (i = 0; i < n; i++) {
    t = arr[i];
    r = rand() % n;
    arr[i] = arr[r];
    arr[r] = t;
  }
}

void bogo_sort(int arr[], int n) {
  while (!is_sorted(arr, n)) {
    shuffle(arr, n);
  }
}
