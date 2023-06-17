#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    unsigned long long int a, ans=0;
    rep(i,64){
        cin >> a;
        ans += (a<<i);
    }
    cout << ans << endl;
}