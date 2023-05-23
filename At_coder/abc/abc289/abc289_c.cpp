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


    int ans=0;
    rep(i,1U<<m){
        set<short> exist;
        rep(j,m){
            if(i & (1U<<j)) rep(k,c.at(j)){
                exist.insert(a.at(j).at(k));
            }
            cout << endl;
        }

        rep(j,n) if(!exist.count(j+1)) goto Exit;
        ans++;
        Exit:;
    }

    cout << ans << endl;

}