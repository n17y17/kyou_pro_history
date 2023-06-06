#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n), rMax(n+1), lMax(n+1);
    rMax.at(0) = lMax.at(0) = -1;
    rep(i,n){
        cin >> a.at(i);
        lMax.at(i+1) = max(lMax.at(i), a.at(i));
    }
    rep(i,n){
        rMax.at(i+1) = max(rMax.at(i), a.at(n-i-1));
    }
    rep(i,n){
        cout << max(lMax.at(i), rMax.at(n-i-1)) << endl;
    }
}