#include <bits/stdc++.h>
using namespace std;
int main() {
    // Initialize the first two Fibonacci numbers
    long long a = 1, b = 2;
    long long sum = 0;
    
    
    while (b <= 4000000) {
        // Check if b is even
        if (b % 2 == 0) {
            sum += b;
        }
        
        
        long long next = a + b;
        a = b;
        b = next;
    }
    
    
    cout << "Sum of even Fibonacci numbers: " << sum << std::endl;
    
    return 0;
}
