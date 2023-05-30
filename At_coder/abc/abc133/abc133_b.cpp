#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, d, ans=0;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d));
    rep(i,n) rep(j,d) cin >> x.at(i).at(j);

    int lxl, tmp;
    rep(i,n) for(int j=i+1; j<n; j++){
        lxl=0;
        rep(k,d){
            tmp = (x.at(i).at(k) - x.at(j).at(k));
            lxl += (tmp*tmp);
        }
        
        double tmp2 = sqrt(lxl);
        if(tmp2 == static_cast<int>(tmp2)) ans++;
    }
    cout << ans << endl;

}
    