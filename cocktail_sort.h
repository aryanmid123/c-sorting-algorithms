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
  bool swapped = true;
  int i = 0;
  int j = n - 1;

  while (i < j && swapped) {
    swapped = false;
    for (int k = i; k < j; k++) {
      if (arr[k] > arr[k + 1]) {
        int temp = arr[k];
        arr[k] = arr[k + 1];
        arr[k + 1] = temp;
        swapped = true;
      }
    }
    j--;
    if (swapped) {
      swapped = false;
      for (int k = j; k > i; k--) {
        if (arr[k] < arr[k - 1]) {
          int temp = arr[k];
          arr[k] = arr[k - 1];
          arr[k - 1] = temp;
          swapped = true;
        }
      }
    }
    i++;
  }
}