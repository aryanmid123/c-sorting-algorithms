/*

Odd-even sort

Worst case performance: O(n^2)
Best case performance: Ω(n log(n))
Average performance: Θ(n^2)
Worst case space complexity: O(1)

*/
#include <stdbool.h>

void odd_even_sort(int arr[], int n) {
  int temp;
  int i;
  int j;
  int gap = n;
  int shrink = 3;
  bool sorted = false;

  while (!sorted) {
    sorted = true;
    for (i = 1; i < n; i += 2) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
        sorted = false;
      }
    }

    for (i = 0; i < n; i += 2) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
        sorted = false;
      }
    }
  }
}
