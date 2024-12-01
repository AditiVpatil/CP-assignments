#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i]; 
    }
    int target;
    cin>>target;
    // Traverse the array and check each element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return index if element is found
        }
    }
    return -1;  // Return -1 if element is not found
}

