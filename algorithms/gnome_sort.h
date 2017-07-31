/*

Gnome sort

Worst case performance: O(n^2)
Best case performance: Ω(n)
Average performance: Θ(n^2)
Worst case space complexity: O(1)

*/

void gnome_sort(int arr[], int n) {
  int i = 0;
  int temp;

  while (i < n) {
    if (i == 0 || arr[i] >= arr[i - 1]) {
      i++;
    } else {
      temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      i--;
    }
  }
}
