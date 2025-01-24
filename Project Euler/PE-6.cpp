#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int s=0;
    for (int i=1;i<=100;i++){
        sum+=i;
        s+=i*i;
    }
    cout<<(sum*sum)-s;
}