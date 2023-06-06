#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    while(true){
        int n, k, a;
        cin >> n >> k;
        if(n==0 && k==0) break;
        vector<int> sum(n+1);
        sum.at(0)=0;
        rep(i,n){
            cin >> a;
            sum.at(i+1) = sum.at(i)+a;
        }

        int ans=0;
        rep(i,n-k+1){
            ans = max(ans, sum.at(i+k)-sum.at(i));
        }
        cout << ans << endl;
    }
}