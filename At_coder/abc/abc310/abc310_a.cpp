#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, p, q, d;
    cin >> n >> p >> q;
    int d_min=1e5;
    rep(i, n){
        cin >> d;
        d_min = min(d_min, d);
    }
    cout << min(p, d_min+q) << endl;;
}