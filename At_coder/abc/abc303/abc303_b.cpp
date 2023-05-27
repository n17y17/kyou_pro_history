#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m+2, vector<int>(n+2,0));
    rep(i,m) rep(j,n) cin >> a.at(i+1).at(j+1);

    vector<set<int>> tonari(n);

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            tonari.at(a.at(i).at(j)-1).insert(a.at(i).at(j-1));
            tonari.at(a.at(i).at(j)-1).insert(a.at(i).at(j+1));
        }
    }
    rep(i,n) tonari.at(i).insert(0);

    long sum=0;
    rep(i,n) sum+=tonari.at(i).size();
    cout << (n*n - sum)/2 << endl;
}