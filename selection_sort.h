int* selection_sort(int arr[], int s) {
  int i, j;

  for (j = 0; j < s - 1; j++) {
    int iMin = j;

    for (i = j + 1; i < s; i++) {
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
  return arr;
}
