/*

Bucket sort

Worst case performance: O(n^2)
Best case performance: Ω(n)
Average performance: Θ(n)
Worst case space complexity: O(n)

*/

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node* next;
};

struct list {
  struct node* first_node_address;
  struct node* last_node_address;
  int total_elements;
};


// Function return number of digits in a number
int get_divisor(int num) {

  int divisor = 1, temp = num;

  while (num > 0) {
    num /= 10;
    divisor *= 10;
  }

  return (temp == 0) ? 1 : divisor;
}


// Function to Perform bucketSort
void bucket_sort(int arr[], int n, int max) {

  struct list list_arr[n];
  int divisor = get_divisor(max);
  int i;

  // Initialize the list
  for (i = 0; i < n; ++i) {
    list_arr[i].first_node_address = NULL;
    list_arr[i].last_node_address = NULL;
    list_arr[i].total_elements = 0;
  }

  // Inserting Elements into the list
  for (i = 0; i < n; ++i) {

    int index = (arr[i] * n) / divisor;

    if (list_arr[index].last_node_address == NULL ||
        list_arr[index].first_node_address == NULL) {

      struct node* temp = (struct node*)malloc(sizeof(struct node));
      temp->value = arr[i];
      temp->next = NULL;

      list_arr[index].first_node_address = temp;
      list_arr[index].last_node_address = temp;
      list_arr[index].total_elements = 1;
    } else {

      struct node* temp = (struct node*)malloc(sizeof(struct node));
      temp->value = arr[i];
      temp->next = NULL;

      list_arr[index].last_node_address->next = temp;
      list_arr[index].last_node_address = temp;
      list_arr[index].total_elements += 1;
    }
  }

  // Sorting Invidual list using Insertion Sort
  for (i = 0; i < n; ++i) {

    if (list_arr[i].first_node_address != NULL &&
        list_arr[i].first_node_address != list_arr[i].last_node_address) {

      int current_list_size = list_arr[i].total_elements;
      int temp_arr[current_list_size], j = 0;
      struct node* temp = list_arr[i].first_node_address;

      // Copy list value int temp array
      for (j = 0; (j < current_list_size); ++j) {
        temp_arr[j] = temp->value;
        temp = temp->next;
      }

      // Perform insertion sort
      for (j = 1; j < current_list_size; ++j) {
        int key = temp_arr[j];
        int k = (j - 1);

        while (k >= 0 && temp_arr[k] > key) {
          temp_arr[k + 1] = temp_arr[k];
          --k;
        }

        temp_arr[k + 1] = key;
      }

      // Copy back value into current list
      temp = list_arr[i].first_node_address;
      j = 0;
      while (temp != NULL) {
        temp->value = temp_arr[j];
        ++j;
        temp = temp->next;
      }
    }
  }


  int j = 0;
  for (i = 0; i < n; ++i) {

    if (list_arr[i].first_node_address != NULL &&
        list_arr[i].last_node_address != NULL) {

      struct node* temp = list_arr[i].first_node_address;
      while (temp != NULL) {
        arr[j] = temp->value;
        ++j;
        temp = temp->next;
      }
    }
  }
}
