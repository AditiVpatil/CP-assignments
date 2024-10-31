// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter two numbers";
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping"<<endl;
    cout<<"first number is:"<<a<<endl;//a=5 b=6
    cout<<"second number is:"<<b<<endl;
    a=a+b;//11=6+5
    b=a-b;//5=11-6
    a=a-b;//6=11-5
    cout<<"After swapping:"<<endl;
    cout<<"first number is:"<<a<<endl;
    cout<<"second number is:"<<b<<endl;
    
    return 0;
}