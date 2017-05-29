/*

Insertion sort

Worst case performance: О(n^2)
Best case performance: Ω(n)
Average performance: Θ(^2)
Worst case space complexity: O(n)

*/

void insertion_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
}
