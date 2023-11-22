#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m, p;
    cin >> n >> m >> p;
    if (n < m)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 + ((n - m) / p) << endl;
    }
}