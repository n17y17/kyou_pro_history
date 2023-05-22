#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short n ,m ,a ,b;
    cin >> n >> m;
    vector<short> ans(n ,0);
    rep(i,m){
        cin >> a >> b;
        ans.at(a-1)++;
        ans.at(b-1)++;
    }
    rep(i ,n) cout << ans.at(i) << endl;
}