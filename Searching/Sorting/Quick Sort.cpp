#include<bits/stdc++.h>
using namespace std;

// Function to swap elements in the array
void Swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];  // Fix: swap arr[i] and arr[j]
    arr[j] = temp;
}

// Partition function to rearrange elements
int partition(int arr[], int l, int r) {
    int pivot = arr[r];  // Pivot element is chosen as the rightmost element
    int i = l - 1;       // Pointer for the smaller element

    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;  // Increment the smaller element index
            Swap(arr, i, j);  // Swap arr[i] and arr[j]
        }
    }
    Swap(arr, i + 1, r);  // Place pivot in the correct position
    return i + 1;  // Return pivot index
}

// QuickSort function to recursively sort the array
void quickSort(int arr[], int l, int r) {
    if (l < r) {
        int pi = partition(arr, l, r);  // Get the pivot index
        quickSort(arr, l, pi - 1);  // Sort left sub-array
        quickSort(arr, pi + 1, r);  // Sort right sub-array
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 7};  // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);  // Get size of the array

    quickSort(arr, 0, n - 1);  // Call quickSort to sort the array

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Added space for better readability
    }
    cout << endl;

    return 0;
}
