#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if((a*3600+b*60)<(c*3600+d*60+1)) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
}