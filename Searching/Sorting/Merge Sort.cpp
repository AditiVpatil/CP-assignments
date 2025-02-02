#include<bits/stdc++.h>
using namespace std;

// Merge function to merge two halves
void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1], b[n2];

    // Copy data to temporary arrays a[] and b[]
    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = l;

    // Merge the temporary arrays back into arr[l..r]
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            arr[k] = a[i];
            i++;
        } else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of a[], if any
    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }

    // Copy the remaining elements of b[], if any
    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }
}

// MergeSort function
void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;  // Base condition for recursion

    int mid = l + (r - l) / 2;  // To avoid overflow
    mergeSort(arr, l, mid);      // Sort the first half
    mergeSort(arr, mid + 1, r);  // Sort the second half
    merge(arr, l, mid, r);       // Merge the two halves
}

int main() {
    int arr[] = {5, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);  // Sort the array using mergeSort

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
