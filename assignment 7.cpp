// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter number:";
    cin>>n;
    if(n>=0 && n%2==0)
        cout<<"positive even";
        else if(n<0 && n%2==0)
        cout<<"negative even";
        else if(n>0 && n%2==1)
        cout<<"positive odd";
        
    
    
        else
            cout<<"negative odd";
        
    
    

    return 0;
}