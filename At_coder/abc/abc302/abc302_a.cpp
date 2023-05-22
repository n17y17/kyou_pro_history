#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long a, b;
    cin >> a >> b;
    if(a%b) cout << (a/b)+1 << endl;
    else cout << a/b << endl;
}