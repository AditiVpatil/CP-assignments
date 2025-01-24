#include <bits/stdc++.h>
using namespace std;

// Function to compute the LCM of two numbers a and b
long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

// Function to compute the LCM of all numbers from 1 to n
long long findLCM(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result = lcm(result, i);
    }
    return result;
}

int main() {
    int n = 20;
    long long result = findLCM(n);
    cout <<result ;
    return 0;
}
