#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    
    //  applicants' desired apartment sizes
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    //  apartment sizes
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long count = 0;
    long long i = 0, j = 0;

    // Use two pointers 
    while (i < n && j < m) {
        if (b[j] >= a[i] - k && b[j] <= a[i] + k) {
            // Found a matching apartment for applicant i
            count++;
            i++; // Move to the next applicant
            j++; // Move to the next apartment
        } else if (b[j] < a[i] - k) {
            // Apartment is small for the current applicant, move to  next apartment
            j++;
        } else {
            // Apartment is large for the current applicant, move to next applicant
            i++;
        }
    }

    
    cout << count << endl;

    return 0;
}
