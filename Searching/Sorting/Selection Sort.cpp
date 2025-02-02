#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int SmallestIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[SmallestIdx]) {
                SmallestIdx = j;
            }
        }
        swap(arr, i, SmallestIdx);  
    }
}

void printArray(int arr[], int n) {  
    for (int i = 0; i < n; i++) {  
        cout << arr[i] << " ";      
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};
    selectionsort(arr, n);  
    printArray(arr, n);     
    return 0;
}
