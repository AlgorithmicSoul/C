#include <stdio.h>

void insertion_sort (int arr [], int n);    // do insertion sort
void scan (int arr[], int n);               // take array input
void display (int arr[], int n);            // display the array

int main (void) {
    int n; scanf("%d", &n);
    int arr[n];
    scan(arr, n);
    insertion_sort(arr, n);
    display(arr, n);
    return 0;
}

void insertion_sort (int arr [], int n) {
    for (int i=1; i<n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void scan (int arr[], int n) {
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
}

void display (int arr[], int n) {
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
}