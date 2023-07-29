Error
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;

    cout << 'a' << endl;

    //m以下の素数を調べる
    vector<bool> IsPrime(m+1,1);
    unordered_set<int8_t> prime;
    int tmp;
    for(int i=2; i<=m; i++){
        if(!IsPrime.at(i)) continue;
        prime.insert(i);
        tmp=i;
        while((tmp+=i)<=m) IsPrime.at(tmp)=0;
    }

    cout << 'b' << endl;

    int a;
    vector<int8_t> exist_p(m+1,1);
    rep(i,n){
        cin >> a;
        unordered_set<int> checked;
        cout << "b1" << endl;
        for(int p : prime){
            if(a<p) continue;
            if(exist_p.at(p)==0) continue;
            cout << "b2" << endl;
            if(a%p==0){
                cout << "b3" << endl;
                tmp=p;
                do exist_p.at(tmp)=0; while((tmp+=p)<=m);
                checked.insert(p);
            }
            cout << "b4" << endl;
        }
        for(int c : checked) prime.erase(c);
        cout << "b5" << endl;
    }

    cout << 'c' << endl;

    int num=0;
    for(int8_t e : exist_p) if(e) num++;
    cout << num-1 << endl;
    cout << 1 << endl;
    for(int i=2; i<=m; i++){
        if(exist_p.at(i)) {cout << i << endl;}
    }
}