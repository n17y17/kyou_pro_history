#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short n;
    cin >> n;
    vector<short> d(n);
    rep(i,n) cin >> d.at(i);

    sort(d.begin() ,d.end());
    short tier = 1;
    rep(i,n-1) if(d.at(i) < d.at(i+1)) tier++;

    cout << tier << endl; 
}