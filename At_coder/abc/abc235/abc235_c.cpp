#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<long> a(n);
    rep(i,n) cin >> a.at(i);

    long x, k;
    int count=0;
    rep(i,q){
        cin >> x >> k;
        count = 0;
        rep(j,n){
            if(a.at(j)==x) count++;
            if(count==k){
                cout << j+1 << endl;
                goto Exit;
            }
        }
        cout << -1 << endl;
        Exit:;
    }
}