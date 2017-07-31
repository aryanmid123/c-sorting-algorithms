/*

Comb sort

Worst case performance: O(n^2)
Best case performance: Ω(n log(n))
Average performance: Θ(n^2)
Worst case space complexity: O(1)

*/
#include <stdbool.h>

void comb_sort(int arr[], int n) {
  int temp;
  int i;
  int j;
  int gap = n;
  int shrink = 3;
  bool swapped;

  while (gap != 1 || swapped == true) {
    gap = (gap / shrink);
    if (gap < 1) {
      gap = 1;
    }
    swapped = false;
    for (int i = 0; i < n - gap; i++) {
      if (arr[i] > arr[i + gap]) {
        temp = arr[i + gap];
        arr[i + gap] = arr[i];
        arr[i] = temp;
        swapped = true;
      }
    }
  }
}
