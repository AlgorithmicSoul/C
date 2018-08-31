#include <stdio.h>

void merge (int arr[], int first_index, int middle_index, int last_index);   // merge two arrays to a single array
void merge_sort (int arr[], int first_index, int last_index);                // do merge sort
void scan (int arr[], int n);                                                // array input
void display (int arr[], int n);                                             // display the array

int main (void) {
    int n; scanf("%d", &n);
    int arr[n];
    scan(arr, n);
    printf("Array before sorting: "); display(arr, n);
    merge_sort(arr, 0, n-1);
    printf("Array after sorting: "); display(arr, n);
    return 0;
}

void scan (int arr[], int n) {
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
}

void display (int arr[], int n) {
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
}

void merge_sort(int arr[], int first_index, int last_index) {
    if (first_index < last_index) {
        int middle_index = first_index+(last_index-first_index)/2;
        merge_sort(arr, first_index, middle_index);
        merge_sort(arr, middle_index+1, last_index);
        merge(arr, first_index, middle_index, last_index);
    }
}

void merge (int arr[], int first_index, int middle_index, int last_index) {
    int i, j, k;
    int n1 = middle_index-first_index+1; // size of left array
    int n2 = last_index-middle_index; // size of right array    
    int left_array[n1], right_array[n2]; // two temp arrays for storing the data
    for (int i=0; i<n1; i++) left_array[i] = arr[first_index+i]; // fill left array
    for (int j=0; j<n2; j++) right_array[j] = arr[middle_index+j+1]; // fill the right array
    // display(left_array, n1); display(right_array, n2); printf("\n\n");
    i =0; j = 0; k = first_index;
    while (i<n1 && j<n2) {
        if (left_array[i] <= right_array[j]) {
            arr[k] = left_array[i];
            i++;
        } else {
            arr[k] = right_array[j];
            j++;
        }
        k++;
    }

    while (i<n1) {
        arr[k] = left_array[i];
        i++; k++;
    }

    while (j<n2) {
        arr[k] = right_array[j];
        j++; k++;
    }
}