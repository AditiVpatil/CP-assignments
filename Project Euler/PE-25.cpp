#include <bits/stdc++.h>
using namespace std;



// Helper function to add two large numbers represented as strings
string addStrings(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    // Add digits from the end (least significant digit) to the start
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += (a[i] - '0');
            i--;
        }
        if (j >= 0) {
            sum += (b[j] - '0');
            j--;
        }
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }

    // Reverse the result to get the correct order
    reverse(result.begin(), result.end());
    return result;
}

// Function to find the index of the first Fibonacci number with 1000 digits
int findFibonacciIndexWith1000Digits() {
    // Initialize the first two Fibonacci numbers as strings to handle large numbers
    string F1 = "1";
    string F2 = "1";
    int index = 2; // Start from the 2nd term (F2)

    // Iterate until we find a Fibonacci number with 1000 digits
    while (true) {
        // Calculate the next Fibonacci number as a string
        string F_next = addStrings(F1, F2);
        index++;

        // Check if the number of digits is >= 1000
        if (F_next.length() >= 1000) {
            return index;
        }

        // Update F1 and F2 for the next iteration
        F1 = F2;
        F2 = F_next;
    }
}



int main() {
    int result = findFibonacciIndexWith1000Digits();
    cout << "The index of the first Fibonacci number with 1000 digits is: " << result << endl;
    return 0;
}