#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, u, k, v;
    cin >> n;
    vector<vector<bool>> g(n, vector<bool>(n, 0));
    rep(i, n){
        cin >> u >> k;
        rep(j, k){
            cin >> v;
            g.at(u-1).at(v-1) = 1;
        }
    }

    rep(i, n){
        rep(j, n){
            cout << g.at(i).at(j);
            if(j!=n-1) cout << ' ';
        }
        cout << endl;
    }
}