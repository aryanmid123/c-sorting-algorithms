/*

Shell sort

Worst case performance: O(n(log(n))^2)
Best case performance: Ω(n log(n))
Average performance: Θ(n(log(n))^2)
Worst case space complexity: O(1)

*/

void shell_sort(int arr[], int n) {
  int j;

  for (int gap = n / 2; gap > 0; gap /= 2) {
    for (int i = gap; i < n; ++i) {
      int temp = arr[i];
      for (j = i; j >= gap && temp < arr[j - gap]; j -= gap) {
        arr[j] = arr[j - gap];
      }
      arr[j] = temp;
    }
  }
}
