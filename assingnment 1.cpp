#include<iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;
    
  (n % 2 == 0) ? cout << n<<endl << " 1" :  cout << n <<endl<< " 0";
    
  return 0;
}