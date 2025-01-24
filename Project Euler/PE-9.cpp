#include <bits/stdc++.h>
using namespace std;

int main(){
    for (int a = 1; a <1000; ++a) {
        for (int b = a + 1; b <1000; ++b) {
            int c = sqrt(a * a + b * b);
            // Check if the triplet (a, b, c) is a Pythagorean triplet
            if (c * c == a * a + b * b && a+b+c==1000) {
                cout << a*b*c << endl;
            }
        }
    }



}
