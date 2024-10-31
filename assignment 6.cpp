#include <bits/stdc++.h>

using namespace std;
int main() {


int score;
cout<<"Enter score:";
    cin >>score;

    if (score>= 90) {
        cout << " grade is: A";
    }
    else if (89>=score && score>=80){ 
        cout << " grade is: B";
    }
    else if (79>=score && score>= 70) {
        cout <<"grade is: C";
    }
    else if (69>=score && score>= 60) {
        cout <<"grade is: D";
    }
    else {
        cout <<" grade is: F";
    }
    return 0;
}