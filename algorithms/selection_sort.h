/*

Selection sort

Worst case performance: O(n^2)
Best case performance: Ω(n^2)
Average performance: Θ(n^2)
Worst case space complexity: O(1)

*/

void selection_sort(int arr[], int n) {
  int i, j;

  for (j = 0; j < n - 1; j++) {
    int iMin = j;

    for (i = j + 1; i < n; i++) {
      if (arr[i] < arr[iMin]) {
        iMin = i;
      }
    }

    if (iMin != j) {
      int temp = arr[j];
      arr[j] = arr[iMin];
      arr[iMin] = temp;
    }
  }
}
