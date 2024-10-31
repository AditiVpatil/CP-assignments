#include <bits/stdc++.h>

using namespace std;
int main() {


int n;
cout<<"Enter number:";
    cin >>n;
    for (int i=1;i<=n;i++){
 if(i%3==0){
    cout<<"Fizz"<<endl;
}
else if (i%5==0){
    cout<<"Buzz"<<endl;
}
else if(i%3==0 && i%5==0){
    cout<<"FizzBuzz";
}
else{
    cout<<i<<endl;
}
}

    
    return 0;
}