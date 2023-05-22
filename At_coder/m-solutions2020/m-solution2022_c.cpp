#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    rep(i,n-k){
        if(a.at(k+i)-a.at(i)>0){
            cout << "Yes" << endl;
        } else{
            cout << "No" << endl;
        }
    }
}