/*

Heap sort

Worst case performance: O(n log(n))
Best case performance: Ω(n log(n))
Average performance: Θ(n log(n))
Worst case space complexity: O(1)

*/

void heap_sort(int[], int);
void build_heap(int[], int);
void satisfy_heap(int[], int, int);

void heap_sort(int a[], int n) {
  build_heap(a, n);
  int heap_size, i, temp;
  heap_size = n - 1;
  for (i = heap_size; i >= 0; i--) {
    temp = a[0];
    a[0] = a[heap_size];
    a[heap_size] = temp;
    heap_size--;
    satisfy_heap(a, 0, heap_size);
  }
}

void build_heap(int a[], int n) {
  int i, heap_size;
  heap_size = n - 1;
  for (i = (n / 2); i >= 0; i--) {
    satisfy_heap(a, i, heap_size);
  }
}

void satisfy_heap(int a[], int i, int heap_size) {
  int l, r, largest, temp;
  l = 2 * i;
  r = 2 * i + 1;
  if (l <= heap_size && a[l] > a[i]) {
    largest = l;
  } else {
    largest = i;
  }
  if (r <= heap_size && a[r] > a[largest]) {
    largest = r;
  }
  if (largest != i) {
    temp = a[i];
    a[i] = a[largest];
    a[largest] = temp;
    satisfy_heap(a, largest, heap_size);
  }
}
