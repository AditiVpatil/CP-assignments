#include <bits/stdc++.h>
using namespace std;


int main() {
    string dna;
    cin >> dna;
    
    int maxLength = 0;  
    int currentLength = 1;  // To store the current repetition length (start with 1 because any character starts a repetition)
    
    
    for (int i = 1; i < dna.size(); i++) {
        if (dna[i] == dna[i - 1]) {
            
            currentLength++;
        } else {
            // If different, check if the current repetition is the longest
            maxLength = max(maxLength, currentLength);
            currentLength = 1;  // Reset current repetition length
        }
    }
    
    
    maxLength = max(maxLength, currentLength);
    
    
    cout << maxLength << endl;

    return 0;
}
