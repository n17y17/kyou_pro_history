#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    
    long long a, m=1e18;
    rep(i,n){
        cin >> a;
        m = min(a,m);
    }
    cout << m << endl;
}