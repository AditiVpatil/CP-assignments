#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);  

    for (int i = 0; i < n; i++) {  
        cin >> nums[i];
    }
      
    long long move = 0;

    // Start loop from index 1
    for (int i = 1; i < n; i++) {  
        if (nums[i] < nums[i - 1]) {
            
            move += nums[i - 1] - nums[i];  
            nums[i] = nums[i - 1];  
        }
    }

    cout << move;  
    return 0;
}
