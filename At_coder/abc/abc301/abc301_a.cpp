#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, t=0, a=0;
    string s;
    cin >> n >> s;

    rep(i,n){
        if(s.at(i)=='A') a++;
        else t++;
        if(a>=(n/2)+n%2) {cout << 'A' << endl; return 0;}
        if(t>=(n/2)+n%2) {cout << 'T' << endl; return 0;}
    }
}