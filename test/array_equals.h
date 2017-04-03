#include <stdbool.h>

bool array_equals(int a[], int b[], int n) {
  int i;
  for (i = 1; i <= n; i++) {
    if (a[i] != b[i]) return false;
  }
  return true;
}
