#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //1e5以下の素数を生成
    vector<bool> IsPrime(100000,1);
    unordered_set<int> prime;
    int tmp;
    for(int i=2; i<100000; i++){
        if(!IsPrime.at(i)) continue;
        prime.insert(i);
        tmp=i;
        while((tmp+=i)<100000) IsPrime.at(tmp)=0;
    }
    cout << endl;

    
    int q;
    cin >> q;

    int L, R, x;
    rep(i,q){
        cin >> L >> R;
        x=0;
        for(int n=L+!(L%2); n<=R; n+=2){
            if(prime.count(n) && prime.count((n+1)/2)) x++;
        }
        cout << x << endl;
    }
    
}