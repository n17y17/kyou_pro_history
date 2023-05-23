#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    unordered_map<long, deque<int>> a;
    int tmp;
    rep(i,n){
        cin >> tmp;
        if(a.count(tmp)) a.at(tmp).push_back(i+1);
        else a[tmp] = {i+1};
    }

    long x, k;
    rep(i,q){
        cin >> x >> k;
        if(!a.count(x)){
            cout << -1 << endl;
        }else if(a.at(x).size()<=k-1){
            cout << -1 << endl;
        }else{
            cout << a.at(x).at(k-1) << endl;
        }
    }
}