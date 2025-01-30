#include <bits/stdc++.h>
using namespace std;


// Function to count divisors of a number
int Divisors(long long num) {
    int count = 0;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            // If i divides num, then both i and num/i are divisors
            if (num / i == i)
                count++;  // Perfect square, count only once
            else
                count += 2;  // Count both divisors: i and num/i
        }
    }
    return count;
}

int main() {
    int n = 1;
    long long triangularNumber = 0;

    while (true) {
        
        triangularNumber = (n * (n + 1)) / 2;

        
        int divisors = Divisors(triangularNumber);

       
        if (divisors > 500) {
            cout << "The first triangular number with over 500 divisors is: " << triangularNumber << endl;
            break;  
        }

        n++;  // Increment n to check the next triangular number
    }

    return 0;
}

    


