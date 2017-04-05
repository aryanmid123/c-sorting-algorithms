int* bucket_sort(int arr[], int s) {
  int i;
  int j;
  int count[s];

  for (i = 0; i < s; i++) {
    count[i] = 0;
  }

  for (i = 0; i < s; i++) {
    (count[arr[i]])++;
  }

  for (i = 0, j = 0; i < s; i++) {
    for (; count[i] > 0; (count[i])--) {
      arr[j++] = i;
    }
  }
  return arr;
}