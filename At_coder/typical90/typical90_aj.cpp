#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(long long i = 0; i < (long long)(n); ++i)

int main()
{
    long long n, q;
    cin >> n >> q;

    vector<long long> z(n);
    vector<long long> w(n);
    rep(i, n)
    {
        long long x, y;
        cin >> x >> y;
        z.at(i) = x + y;
        w.at(i) = x - y;
    }

    long long z_min, w_min = LLONG_MAX;
    long long z_max, w_max = LLONG_MIN;
    rep(i, n)
    {
        z_min = min(z.at(i), z_min);
        w_min = min(w.at(i), w_min);
        z_max = max(z.at(i), z_max);
        w_max = max(w.at(i), w_max);
    }

    rep(i, q)
    {
        long long qi;
        cin >> qi;
        --qi;

        cout << max(max(abs(z_max-z.at(qi)), abs(z_min-z.at(qi))), max(abs(w_max-w.at(qi)), abs(w_min-w.at(qi)))) << endl;
    }
}