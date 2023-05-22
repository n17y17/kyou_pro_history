#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;

    int sousa, x;
    long shift=0;
    rep(i,q){
        cin >> sousa >> x;
        if(sousa - 1){
            cout << s.at(((x-1-shift)%n+n)%n) << endl;
        }else{
            shift += x;
        }
    }
}