#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,n) cin >> a.at(i);
    rep(i,m) cin >> b.at(i);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int Min=1e9;
    rep(i,n){
        auto itr1=lower_bound(b.begin(), b.end(), a.at(i));
        if(itr1!=b.end()){
            if(itr1!=b.begin()){
                Min = min(Min, min(*itr1-a.at(i), a.at(i)-*(itr1-1)));
            }else{
                Min = min(Min, *itr1-a.at(i));
            }
        }else{
            Min = min(Min, a.at(i)-*(b.end()-1));
        }
        // cout << Min << endl;
    }
    cout << Min << endl;
}