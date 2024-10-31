#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter number of elements:";
cin>>n;
cout<<"\nEnter elements:\n";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Reapeating elements are:";
for(int i=0; i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j] && arr[i]){
            cout<<arr[j]<<"";
            continue;
        }
    }
}
return 0;
}