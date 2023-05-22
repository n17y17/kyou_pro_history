#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans=0;
    rep(i,101) if(a<=i && i<b && c<=i && i<d) ans++;
    cout << ans << endl;
}