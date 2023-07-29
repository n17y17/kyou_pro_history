#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<int>> dp(s1.size()+1, vector<int>(s2.size()+1));
    rep(i,s1.size()+1) dp.at(i).at(0) = i;
    rep(i,s2.size()+1) dp.at(0).at(i) = i;

    rep(i, s1.size()){
        rep(j, s2.size()){
            if(s1.at(i) == s2.at(j))
                dp.at(i+1).at(j+1) = min({dp.at(i).at(j), dp.at(i+1).at(j)+1, dp.at(i).at(j+1)+1});
            else
                dp.at(i+1).at(j+1) = min({dp.at(i).at(j)+1, dp.at(i+1).at(j)+1, dp.at(i).at(j+1)+1});
        }
    }
    cout << dp.at(s1.size()).at(s2.size()) << endl;
}