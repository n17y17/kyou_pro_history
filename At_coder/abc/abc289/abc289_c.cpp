#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    char n, m;
    cin >> n >> m;
    vector<char> c(m);
    vector<vector<char>> a(m,vector<char>(0));
    char tmp;
    rep(i,m){
        cin >> c.at(i);
        rep(j,c.at(i)){
            cin >> tmp;
            a.at(i).push_back(tmp);
        }
    }

    int ans=0;
    
    rep(i,i<(1U<<m)){
        set<char> exist;
        rep(j,m){
            if(i & (1U<<j)) rep(k,a.at(j).size()) exist.insert(a.at(j).at(k));
        }

        bool ok=true;
        rep(j,n){
            if(!exist.count(j+1)) ok=false;
        }
        if(ok) ans++;
    }

    cout << ans << endl;

}