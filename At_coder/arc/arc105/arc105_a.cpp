#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<long> cookie(4);
    long sum=0;
    rep(i,4){
        cin >> cookie.at(i);
        sum += cookie.at(i);
    }

    long eat;

    for(unsigned bit=0; bit<16; bit++){ //16=2^4
        eat=0;
        rep(i,4){
            if(bit & (1U<<i)) eat += cookie.at(i);
        }
        if(eat == (sum-eat)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}