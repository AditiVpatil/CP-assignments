#include <bits/stdc++.h>

using namespace std;



void divideIntoTwoSets(int n) {
    long long totalSum = (long long)n * (n + 1) / 2;
    if (totalSum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    long long target = totalSum / 2;
    vector<int> set1, set2;
    for (int i = n; i >= 1; --i) {
        if (i <= target) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }

    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (int num : set1) {
        cout << num << " ";
    }
    cout << endl;
    cout << set2.size() << endl;
    for (int num : set2) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    divideIntoTwoSets(n);
    return 0;
}