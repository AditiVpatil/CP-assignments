#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> songs(n);
    for (long long i = 0; i < n; ++i) {
        cin >> songs[i];
    }
    
    unordered_map<long long,long long> lastSeen;
    long long maxLength = 0;
    long long left = 0;
    
    for (long long right = 0; right < n; ++right) {
        long long currentSong = songs[right];
        if (lastSeen.find(currentSong) != lastSeen.end() && lastSeen[currentSong] >= left) {
            left = lastSeen[currentSong] + 1;
        }
        lastSeen[currentSong] = right;
        maxLength = max(maxLength, right - left + 1);
    }
    
    cout << maxLength << endl;
    
    return 0;
}