#include "../algorithms/pancake_sort.h"
#include "array_equals.h"
#include "minunit.h"
#include <stdio.h>
int tests_run = 0;

int foo = 7;
int bar = 4;

static char* test_foo() {
  int arr[9] = {4, 9, 5, 6, 8, 7, 1, 2, 3};
  int control_arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  pancake_sort(arr, 9);
  pancake_sort(arr, 9);

  mu_assert("error, array was not sorted", array_equals(control_arr, arr, 9));
  return 0;
}

static char* all_tests() {
  mu_run_test(test_foo);
  return 0;
}

int main(int argc, char** argv) {
  char* result = all_tests();
  if (result != 0) {
    printf("%s\n", result);
  } else {
    printf("ALL TESTS PASSED\n");
  }
  printf("Tests run: %d\n", tests_run);

  return result != 0;
}
