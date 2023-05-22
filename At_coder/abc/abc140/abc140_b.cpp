#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n-1);
    rep(i,n) cin >> a.at(i);
    rep(i,n) cin >> b.at(i);
    rep(i,n-1) cin >> c.at(i);

    int ans=0;
    rep(i,n){
        ans += b.at(a.at(i)-1);
        if(i>0 && a.at(i)==a.at(i-1)+1){
            ans += c.at(a.at(i)-2);
        }
    }
    cout << ans << endl;
}