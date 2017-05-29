/*

Quick sort

Worst case performance: O(n^2)
Best case performance: O(n)
Average performance: O(n\log n)
Worst case space complexity: O(n)

*/

void quick_sort(int array[], int first_index, int last_index) {
  // declaring index variables
  int pivotIndex, temp, index_a, index_b;

  if (first_index < last_index) {
    // assigning first element index as pivot element
    pivotIndex = first_index;
    index_a = first_index;
    index_b = last_index;

    // Sorting in Ascending order with quick sort
    while (index_a < index_b) {
      while (array[index_a] <= array[pivotIndex] && index_a < last_index) {
        index_a++;
      }
      while (array[index_b] > array[pivotIndex]) {
        index_b--;
      }

      if (index_a < index_b) {
        // Swapping operation
        temp = array[index_a];
        array[index_a] = array[index_b];
        array[index_b] = temp;
      }
    }

    // At the end of first iteration, swap pivot element with index_b element
    temp = array[pivotIndex];
    array[pivotIndex] = array[index_b];
    array[index_b] = temp;

    // Recursive call for quick sort, with partitioning
    quick_sort(array, first_index, index_b - 1);
    quick_sort(array, index_b + 1, last_index);
  }
}
