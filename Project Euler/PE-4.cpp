#include <bits/stdc++.h>
using namespace std;
int main() {
    int p=0;
    for(int i=100;i<1000;i++){
        for(int j=100;j<1000;j++){
            int curr=i*j;
            string currp=to_string(curr);
            string temp=currp;
            reverse(currp.begin(),currp.end());
        if(currp==temp && curr>p){
           p=curr;
        }
        }
    }
    cout<<p;

    return 0;
}