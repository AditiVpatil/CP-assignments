#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

  
   vector<int> nums(n);

   
   for(int i = 0; i < n; i++) {
       cin >> nums[i];
   }

   // Use long long to avoid overflow
   long long result = nums[0];
   long long MaxEnd = nums[0];

   // Apply Kadane's algorithm
   for(int i = 1; i < n; i++) {
       MaxEnd = max(MaxEnd + nums[i], (long long)nums[i]); // Cast to long long for safety
       result = max(MaxEnd, result);
   }

   
   cout << result << endl;
   return 0;
}
