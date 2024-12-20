#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> nums(n); 

       for (int i = 0; i <n; i++)
        cin>> nums[i] ;
       
       
int c0 = 0, c1 = 0, c2 = 0;

    // Count 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            c0 += 1;
        else if (nums[i] == 1)
            c1 += 1;
        else
            c2 += 1;
    }

    int idx = 0;
    
    // Place all the 0s
    for (int i = 0; i < c0; i++)
        nums[idx++] = 0;

    // Place all the 1s
    for (int i = 0; i < c1; i++)
        nums[idx++] = 1;

    // Place all the 2s
    for (int i = 0; i < c2; i++)
        nums[idx++] = 2;

for (int i = 0; i <n; i++)
        cout << nums[i] << " ";
        return 0;
}
    
    