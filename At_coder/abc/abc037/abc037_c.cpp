#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k, a;
    cin >> n >> k;
    vector<long> sum(n+1);
    sum.at(0)=0;
    rep(i,n){
        cin >> a;
        sum.at(i+1) = sum.at(i)+a;
    }
    long ans = 0;
    rep(i,n-k+1){
        ans += sum.at(i+k)-sum.at(i);
    }
    cout << ans << endl;
}