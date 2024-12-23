#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    
    // Edge case: if the array is empty, return empty vector
    if (n == 0) return {};

    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN;

    // First pass to find potential candidates
    for (int i = 0; i < n; i++) {
        
        if (cnt1 == 0 && nums[i]!=el2) {
            el1 = nums[i];
            cnt1 = 1;
        }
        else if (cnt2 == 0 && nums[i]!=el1) {
            el2 = nums[i];
            cnt2 = 1;
        }
        else if (nums[i] == el1) {
            cnt1++;
        }
        else if (nums[i] == el2) {
            cnt2++;
        }
        else {
            cnt1--;
            cnt2--;
        }
    }

    // Second pass to count the occurrences of el1 and el2
    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == el1) {
            cnt1++;
        } else if (nums[i] == el2) {
            cnt2++;
        }
    }

    vector<int> result;
    if (cnt1 > n / 3) {
        result.push_back(el1);
    }
    if (cnt2 > n / 3) {
        result.push_back(el2);
    }

    return result;
}

int main() {
    vector<int> nums = {3, 2, 3};
    vector<int> result = majorityElement(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
