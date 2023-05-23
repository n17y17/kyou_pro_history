#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    short n, m;
    cin >> n >> m;
    vector<short> c(m);
    vector<vector<short>> a(m,vector<short>(0));
    short tmp;
    rep(i,m){
        cin >> c.at(i);
        rep(j,c.at(i)){
            cin >> tmp;
            a.at(i).push_back(tmp);
        }
    }

    cout << "output" << endl;
    rep(i,m){
        rep(j,c.at(i)){
            cout << a.at(i).at(j) << ' ';
        }
        cout << endl;
    }

    int ans=0;
    
    rep(i,1U<<m){
        set<short> exist;
        rep(j,m){
            if(i & (1U<<j)) rep(k,a.at(j).size()){
                exist.insert(a.at(j).at(k));
                //cout << a.at(j).at(k) << ' ';
            }
            cout << endl;
        }

        bool ok=true;
        rep(j,n){
            if(!exist.count(j+1)) ok=false;
        }
        if(ok) ans++;
    }

    cout << ans << endl;

}