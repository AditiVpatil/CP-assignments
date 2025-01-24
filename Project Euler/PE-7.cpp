#include <bits/stdc++.h>

using namespace std;

template <size_t N>
vector<size_t> primeUpto() {

    array<bool, N> primel;

    fill(primel.begin(), primel.end(), true);

    primel[0] = primel[1] = false;

    int sqrtLt = sqrt(N) + 1;

    for(size_t i = 2; i < sqrtLt; i++) {

        if(primel[i]) {

            for(size_t j = i * i; j < N; j += i) primel[j] = false;

        }

    }

    vector<size_t> res;

    for(size_t i = 0; i < N; i++) {

        if(primel[i]) res.push_back(i);

    }

    return res;

}

int main() {

    cout << primeUpto<1000000>()[10000] << endl;

    return 0;

}
