#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    long d;
    cin >> n >> m >> d;

    vector<pair<long, bool>> ab(n+m);
    long tmp;
    rep(i,n){
        cin >> tmp;
        ab.at(i) = make_pair(tmp, 0);
    }
    rep(i,m){
        cin >> tmp;
        ab.at(n+i) = make_pair(tmp, 1);
    }

    sort(ab.begin(), ab.end());

    for(int i=n+m-1; i>=0; i--){
        for(int j=1; j<=i; j++){
            if(max(ab.at(i).first-ab.at(i-j).first, 0L) > d) break;
            if(ab.at(i).second != ab.at(i-j).second){
                cout << ab.at(i).first + ab.at(i-j).first << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
}