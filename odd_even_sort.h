/*

Odd-even sort

Worst case performance: O(n^2)
Best case performance: Ω(n log(n))
Average performance: Θ(n^2)
Worst case space complexity: O(1)

*/
#include <stdbool.h>

void odd_even_sort(int arr[], int n) {
  bool sorted = false;  // Initially array is unsorted
  int temp;

  while (!sorted) {
    sorted = true;

    // Perform Bubble sort on odd indexed element
    for (int i = 1; i <= n - 2; i += 2) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
        sorted = false;
      }
    }

    // Perform Bubble sort on even indexed element
    for (int i = 0; i <= n - 2; i += 2) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
        sorted = false;
      }
    }
  }
}