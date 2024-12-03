#include <bits/stdc++.h>>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    // factors from 3 to square root n
    for (int i = 3; i*i <= n; i += 2) {
        
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    
    if (n > 2) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
