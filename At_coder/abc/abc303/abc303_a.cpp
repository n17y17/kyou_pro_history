#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s, t;
    cin >> n >> s >> t;

    bool ok;
    rep(i,n){
        ok=0;
        if(s.at(i)==t.at(i)) ok=1;
        if(s.at(i)=='1' && t.at(i)=='l') ok=1;
        if(s.at(i)=='l' && t.at(i)=='1') ok=1;
        if(s.at(i)=='0' && t.at(i)=='o') ok=1;
        if(s.at(i)=='o' && t.at(i)=='0') ok=1;
        if(!ok){
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;
}