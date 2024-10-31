#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter number of elements:";
cin>>n;
cout<<"\nEnter elements:";
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 
for(int i=0;i<n;i++){
    int product=1;
for(int j=0;j<n;j++){

    if(i!=j)
        product*=arr[j];

}
cout<< product<<" ";
}


return 0;
}
