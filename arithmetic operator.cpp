#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter numbers";
int a,b;float c,d;
    cin>>a>>b>>c>>d;
    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    float quotient=fmod(c/d);
   int remainder=c%d ;

    cout<<"sum:"<<sum;
    cout<<"difference :"<<difference;
    cout<<"product :"<<product;
    cout<<"quotient :"<<quotient;
    cout<<"remainder :"<<remainder;

    return 0;
}