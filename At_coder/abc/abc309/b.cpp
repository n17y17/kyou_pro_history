#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i, n) cin >> a.at(i);

    cout << a.at(1).at(0);
    rep(i, n-1) cout << a.at(0).at(i);
    cout << endl;
    for(int i=1; i<n-1; i++){
        cout << a.at(i+1).at(0);
        for(int j=1; j<n-1; j++) cout << a.at(i).at(j);
        cout << a.at(i-1).at(n-1) << endl;;
    }
    for(int i=1; i<n; i++) cout << a.at(n-1).at(i);
    cout << a.at(n-2).at(n-1) << endl;;
}