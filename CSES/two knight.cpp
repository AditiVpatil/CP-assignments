#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; ++k) {
        long long total_positions = (1LL * k * k) * (1LL * k * k - 1) / 2;
        long long attack_positions = 4 * (k - 1) * (k - 2);
        long long safe_positions = total_positions - attack_positions;
        cout << safe_positions << "\n";
    }
    return 0;
}