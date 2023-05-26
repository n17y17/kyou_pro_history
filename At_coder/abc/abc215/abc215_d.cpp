#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;

    //m以下の素数を調べる
    vector<int8_t> IsPrime(m+1,1);
    unordered_set<int> prime;
    int tmp;
    for(int i=2; i<=m; m++){
        if(!IsPrime.at(i)) continue;
        prime.insert(i);
        tmp=i;
        while((tmp+=i)<m) IsPrime.at(tmp)=0;
        rep(j,m)cout << IsPrime.at(j) << ' ';
        cout << endl;
    }

    int a, num=m;
    vector<int8_t> exist_p(m+1,1);
    rep(i,n){
        cin >> a;
        unordered_set<int> checked;
        for(int p : prime){
            if(a<p) break;
            if(exist_p.at(p)==0) continue;
            if(a%p==0){
                tmp=p;
                while((tmp+=p)<=m) exist_p.at(tmp)=0;
                num -= (m/p);
                checked.insert(p);
            }
        }
        for(int c : checked) prime.erase(c);
    }

    cout << num << endl;
    cout << 1 << endl;
    for(int i=2; i<=m; i++){
        if(exist_p.at(i)) cout << i << endl;
    }
}