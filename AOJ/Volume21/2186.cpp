#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int gx, gy, p, x1, y1, x2, y2;
    rep(i,n){
        cin >> gx >> gy >> p;
        vector<vector<long>> dp(gx+1, vector<long>(gy+1, 0));
        set<vector<int>> m;
        rep(i,p){
            cin >> x1 >> y1 >> x2 >> y2;
            vector<int> m0 = {x1, y1, x2, y2};
            m.insert(m0);
        }
        dp.at(1).at(1)=1;
        rep(i,gx) rep(j,gy){
            vector<int> m0 = {i+1, j+1, i, j+1};
            if(m.count(m0)==0) dp.at(i+1).at(j+1) += dp.at(i+1).at(j);
            vector<int> m0 = {i+1, j+1, i+1, j};
            if(m.count(m0)==0) dp.at(i+1).at(j+1) += dp.at(i).at(j+1);
        }
        if(dp.at(gx).at(gy)==0) cout << "Miserable Hokusai!" << endl;
        else cout << dp.at(gx).at(gy) << endl;
    }
}