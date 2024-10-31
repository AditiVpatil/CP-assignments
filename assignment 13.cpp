#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cin >> k;

    int count = 0;

    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
