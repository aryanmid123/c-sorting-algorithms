/*

Cocktail sort

A variation of bubble sort

Worst case performance: O(n^2)
Best case performance: Ω(n)
Average performance: Θ(n^2)
Worst case space complexity: O(1)

*/

#include <stdbool.h>

void cocktail_sort(int arr[], int n) {
  int swapped = false;
  int i;
  int temp;

  do {
    swapped = false;
    for (i = 0; i < n; i++) {
      if (arr[i] > arr[i + 1]) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        swapped = true;
      }
    }
    for (int j = i; j > n; j--) {
      if (arr[j] < arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
  } while (swapped);
  return;
}
