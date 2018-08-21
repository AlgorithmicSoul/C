#include <stdio.h>

void swap (int *x, int *y);
void print (int arr[], int size);
int partition (int arr[], int low, int high);
void quickSort (int arr[], int low, int high);

int main () {
  int arr[] = {2,8,10,9,57,256,151,141,112,1,3,5,1,32};
  int size = sizeof(arr)/sizeof(arr[0]);
  print(arr, size);
  quickSort(arr, 0, size-1);
  print(arr, size);
  return 0;
}

void swap (int *x, int *y) {
  int t = *x;
  *x = *y;
  *y = t;
}

void print (int arr[], int size) {
  for (int i=0 ;i<size; i++) printf("%d ", arr[i]);
  printf("\n");
}

int partition (int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low-1;
  for (int j=low; j<high; j++) {
    if (arr[j]<=pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i+1);
}

void quickSort (int arr[], int low, int high) {
  if (low < high) {
    int partition_index = partition(arr, low, high);
    quickSort(arr, low, partition_index-1);
    quickSort(arr, partition_index+1, high);
  }
}

/*
  in divide an conquer strategy divide means partitioning the given problem or given array to be sorted into small sub problems or into two sub arrays each containing about half of the elements of array. conquer means sorting the sub arrays recursively using sorting algorithm.

  steps:-
    1. choose a pivot element (4 possible ways) using last element as pivot
    2.
*/
