#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = INT_MIN;  // Start with the smallest possible integer
    for(int i = 0; i < n; i++){
        int sum = 0;  // Initialize sum for each subarray starting from index i
        for(int j = i; j < n; j++){
            sum += arr[j];  // Add current element to sum
            result = max(result, sum);  // Update result if we find a new maximum sum
        }
    }

    cout << result << endl;  // Output the maximum subarray sum
    return 0;
}
