#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    int tmp;
    rep(i,3*n){
        cin >> tmp;
        a.at(tmp-1).push_back(i);
    }

    map<int, int> m;
    vector<int> b(3);
    rep(i,n){
        b = a.at(i);
        sort(b.begin(), b.end());
        m[b.at(1)] = i+1;
    }

    for(pair p : m) cout << p.second << ' ';
    cout << endl;
}