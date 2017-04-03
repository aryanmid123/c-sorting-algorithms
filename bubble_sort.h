int* bubble_sort(int arr[], int s) {
  unsigned int temp;
  unsigned int swaps;

  for (unsigned int i = 0; i < s; i++) {
    swaps = 0;
    for (unsigned int j = 0; j < s; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swaps++;
      }
    }
    if (swaps == 0) {
      break;
    }
  }
  return arr;
}
