#include <bits/stdc++.h>
using namespace std;

int main(){
    int longest_chain = 0;  
    int starting_chain = -1;
    
    for(int i = 1; i < 1000000; i++){
        int chain_length = 1;  
        int n = i;
        
        while(n != 1){
            if(n % 2 == 0){
                n = n / 2;
            }
            else{
                n = n * 3 + 1;
            }
            chain_length++;
        }

        if(chain_length > longest_chain){
            longest_chain = chain_length;
            starting_chain = i;  
        }
    }
    
    cout << starting_chain;  
    return 0;
}
