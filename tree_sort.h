/*

Tree sort

A variation of bubble sort

Worst case performance: O(n^2)
Best case performance: Ω(n log n)
Average performance: Θ(n log n)
Worst case space complexity: O(n)

*/

#include <stdlib.h>

typedef struct node {
  int key;
  struct node* left_node;
  struct node* right_node;
} node;

node* create_node(int key) {
  node* new_node = (node*)malloc(sizeof(node));
  new_node->key = key;
  new_node->left_node = NULL;
  new_node->right_node = NULL;
  return new_node;
}

node* insert_node(node* leaf, int value) {
  if (leaf == NULL) {
    leaf = create_node(value);
  }
  if (value < leaf->key) {
    leaf->left_node = insert_node(leaf->left_node, value);
  }
  if (value > leaf->key) {
    leaf->right_node = insert_node(leaf->right_node, value);
  }

  return leaf;
}

void in_order(node* root, int arr[], int* i) {
  if (root != NULL) {
    in_order(root->left_node, arr, i);
    arr[*i] = root->key;
    *i += 1;
    in_order(root->right_node, arr, i);
  }
}

void tree_sort(int arr[], int n) {
  node* root;

  root = NULL;

  int i;

  for (i = 0; i < n; i++) {
    root = insert_node(root, arr[i]);
  }

  i = 0;

  in_order(root, arr, &i);
}
