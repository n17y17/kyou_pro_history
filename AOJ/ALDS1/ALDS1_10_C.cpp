#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;
    string x, y;
    rep(i,q){
        cin >> x >> y;
        vector<vector<int>> dp(x.size()+1, vector<int>(y.size()+1, 0));
        rep(j, x.size()){
            rep(k, y.size()){
                if(x.at(j) == y.at(k)) dp.at(j+1).at(k+1) = max(dp.at(j).at(k)+1, max(dp.at(j+1).at(k), dp.at(j).at(k+1)));
                else dp.at(j+1).at(k+1) = max(dp.at(j+1).at(k), dp.at(j).at(k+1));
            }
        }
        cout << dp.at(x.size()).at(y.size()) << endl;
    }
}