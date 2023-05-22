#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m), ans(n,0);
    rep(i,m) cin >> a.at(i);
    rep(i,m) cin >> b.at(i);

    rep(i,m){
        ans.at(a.at(i)-1)++;
        ans.at(b.at(i)-1)++;
    }

    rep(i,n) cout << ans.at(i) << endl;
}