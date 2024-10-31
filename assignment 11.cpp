#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int maxprofit=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int profit =arr[j]-arr[i];
        
            if(profit>maxprofit)
            {
             maxprofit=profit;
                
                
           }
            
        }
    }
    cout<<maxprofit;
    return 0;
}