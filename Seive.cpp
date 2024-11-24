#include <bits/stdc++.h>
using namespace std;
void sieve(int n) {
    // Step 1: Create a boolean array "prime[0..n]" and initialize all entries as true
    vector<bool> prime(n + 1, true); // Assume all numbers are prime
    prime[0] = prime[1] = false; // 0 and 1 are not primes
    
    // Step 2: Loop through all numbers from 2 to sqrt(n)
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Step 3: Mark all multiples of p as non-prime
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
    
    // Step 4: Print all prime numbers
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            cout << p << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Prime numbers up to " << n << " are: ";
    sieve(n);
    
    return 0;
}
