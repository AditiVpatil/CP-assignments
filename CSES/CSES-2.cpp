#include <bits/stdc++.h>
using namespace std;

int main(){
 
    int n;
    cin >> n;
    
   vector<int> nums(n);  

    for(int i = 0; i < n; i++) {  
        cin >> nums[i];
    }
   
    int i = 0;
    while (i < n) {
        if (nums[i] >= 1 && nums[i] < n && nums[nums[i]-1] != nums[i]) {
            swap(nums[nums[i]-1], nums[i]);  // Swap the elements as per condition
        } else {
            i++;
        }
    }
        
    for (int i = 0; i < n; ++i) {  
        if (nums[i] != i+1) {
            cout << i+1 << endl;  
            return 0;
        }
    }
        
    cout << n+1 << endl;  
    return 0;
}
