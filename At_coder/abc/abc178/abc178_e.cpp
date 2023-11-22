#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
    int n;

    int z_max = -1;
    int z_min = 2e9;
    int w_max = -1e9;
    int w_min = 1e9;

    cin >> n;
    rep(i, n)
    {
        int x, y;
        cin >> x >> y;
        int z = x + y;
        int w = x - y;
        z_max = max(z, z_max);
        z_min = min(z, z_min);
        w_max = max(w, w_max);
        w_min = min(w, w_min);
    }

    cout << max(max(z_max-z_min, z_min-z_max), max(w_max-w_min, w_min-w_max)) << endl;
}