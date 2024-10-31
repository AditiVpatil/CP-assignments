#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    int num1, num2, num3; 
    cout << "Enter three numbers: "; 
    cin >> num1 >> num2 >> num3; 
    int largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3); 
 
    // Output the largest number 
    cout << "The largest number is: " << largest << endl; 
 
    return 0; 
} 