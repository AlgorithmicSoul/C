#include <stdio.h>

void swap (int *x, int *y);
void print (int arr[], int size);
void bubbleSort(int arr[], int n);
void bubbleSortRecursive(int arr[], int n);

int main () {
  int arr[] = {2,8,10,9,57,256,151,141,112,1,3,5,1,32};
  int size = sizeof(arr)/sizeof(arr[0]);
  print(arr, size);
  bubbleSort(arr, size);
  print(arr, size);
  int arr1[] = {2,8,10,9,57,256,151,141,112,1,3,5,1,32};
  bubbleSortRecursive(arr1, size);
  print(arr1, size);
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

void bubbleSort (int arr[], int n) {
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-i-1; j++) {
      if (arr[j] > arr[j+1]) swap(&arr[j], &arr[j+1]);
    }
  }
}

void bubbleSortRecursive(int arr[], int n) {
    if (n==1) return;
    for (int i=0; i<n-1; i++)
      if (arr[i]>arr[i+1])
        swap(&arr[i], &arr[i+1]);
    bubbleSortRecursive(arr, n-1);
}

/*
  in divide an conquer strategy divide means partitioning the given problem or given array to be sorted into small sub problems or into two sub arrays each containing about half of the elements of array. conquer means sorting the sub arrays recursively using sorting algorithm.

  steps:-
    1. choose a pivot element (4 possible ways) using last element as pivot
    2.
*/
