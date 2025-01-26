#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;

    // Step 1: Handle cases where no beautiful permutation exists
    if (n == 2 || n==3) {
        cout << "NO SOLUTION" << endl;
        return 0;
       
    }

    // Step 2: Generate the permutation
    vector<int> result;
    
    

    // Add even numbers next
    for (int i = 2; i <= n; i += 2) {
        result.push_back(i);
    }

    // Add odd numbers first
    for (int i = 1; i <= n; i += 2) {
        result.push_back(i);
    }

    // Step 3: Output the beautiful permutation
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
    
}
