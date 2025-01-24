#include <bits/stdc++.h>
using namespace std;

long long largestPrimeFactor(long long n) {
    // Initialize the largest prime factor variable
    long long largest = -1;

    // Divide out all factors of 2
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }

    // Check odd factors from 3 to sqrt(n)
    for (long long i = 3; i*i <= n; i += 2) {
        
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }

    
    if (n > 2) {
        largest = n;
    }

    return largest;
}

int main() {
    long long number = 600851475143;
    long long result = largestPrimeFactor(number);
   cout << "Largest prime factor of " << number << " is: " << result <<endl;
    return 0;
}
