#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(short i = 0 ;i < n ;i++)

int main() {
    short n ,k ,ans = 1;
    cin >> n >> k;
    rep(i,n) ans = min(ans*2 ,ans+k);
    cout << ans << endl;
}