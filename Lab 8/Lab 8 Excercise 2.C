#include <stdio.h>
#include <stdlib.h>

int count_zeros(int arr[], int size);
int count_negs(int arr[], int size);

int main(void) {
  FILE *file = fopen("arr.data", "r");
  int *ptr_1 = (int *)malloc(sizeof(int));
  ptr_1[0] = 7;
  int size = 0;

  printf("ptr: %d\n", ptr_1[0]);

  fscanf(file, "%d", &size);
  int *arr = (int *)calloc(size, sizeof(int));

  for (int i = 0; i < size; i++) {
    fscanf(file, "%d", &arr[i]);
    printf("%d ", arr[i]);
  }

  printf("\nNumber of zeros: %d\n", count_zeros(arr, 5));
  printf("Number of negatives: %d", count_negs(arr, 5));

  free(ptr_1);
  free(arr);
}

int count_zeros(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      count++;
    }
  }
  return count;
}

int count_negs(int arr[], int size) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      count++;
    }
  }
  return count;
}