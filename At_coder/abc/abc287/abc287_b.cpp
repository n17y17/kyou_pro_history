#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m, tmp;
    cin >> n >> m;
    vector<int> s(n);
    set<int> t;
    rep(i,n){
        cin >> tmp;
        s.at(i)=tmp%1000;
        cout << tmp%1000 << endl;
    }
    rep(i,m){
        cin >> tmp;
        t.insert(tmp);
    }

    int ans=0;
    rep(i,n){
        if(t.count(s.at(i))) ans++;
    }
    cout << ans << endl;
}