#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter number of elements:";
cin>>n;
cout<<"\nEnter elements:\n";
 vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
cout<<"Reapeating elements are:";
int last=-1;
for(int i=1; i<n;i++){
    
        if(arr[i]==arr[i-1] && arr[i]!=last){
            cout<<arr[i]<<"";
            last=arr[i];
        }
    
}
return 0;
}
