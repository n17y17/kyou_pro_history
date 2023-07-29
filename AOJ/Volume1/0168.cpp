#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<long long> dp(31);
    dp.at(0) = dp.at(1) = 1;
    dp.at(2) = 2;
    dp.at(3) = 4;
    for(int i=4; i<31; i++){
        dp.at(i) = dp.at(i-1) + dp.at(i-2) + dp.at(i-3);
    }

    int n;
    while(true){
        cin >> n;
        if(n==0) return 0;

        cout << ((dp.at(n)+9) / 10 + 364) / 365 << endl;
    }
}