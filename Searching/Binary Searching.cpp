#include <bits\stdc++.h>
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

    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;  

        // Check if target is at mid
        if (arr[mid] == target) {
            return mid;  
        }

        // If target is smaller, ignore the right half
         else if (arr[mid] > target) {
            end = mid - 1;
        }
       
        else {
            start = mid + 1;
        }
    }

    return 0;  
    }

