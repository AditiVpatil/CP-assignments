#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr; // Placing the current element in its correct position
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
    insertionsort(arr, n);
    printArray(arr, n);  
    return 0;
}
