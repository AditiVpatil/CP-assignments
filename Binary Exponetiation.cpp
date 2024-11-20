#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, base, power, result = 1;
    cin >> base >> power; 
    
    while(power > 0) {
        if(power % 2 == 1) {
            result *= base; 
        }
      else {
          
        base *= base;  
        power /= 2; 
       }
    }
    
    cout << result << endl; 
    return 0;
}