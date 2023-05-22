#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short n;
    cin >> n;
    int l ,r ,sum=0;
    rep(i ,n){
        cin >> l >> r;
        sum += (r+1-l);
    }
    cout << sum << endl;
}