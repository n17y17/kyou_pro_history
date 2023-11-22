#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    uint32_t n, d;
    uint64_t p;
    cin >> n >> d >> p;
    vector<uint32_t> f(n + d, 0);
    rep(i, n)
    {
        cin >> f.at(i);
    }

    sort(f.begin(), f.end());

    uint64_t cost = 0;
    uint64_t cost_d = 0;

    for (int i = n + d - 1; i >= d; )
    {
        cost_d = 0;
        for (int j = 0; j < d; ++j, --i)
        {
            cost_d += f.at(i);
        }
        // cout << min(cost_d, p) << " " << cost_d << " " << p << endl;
        cost += std::min(cost_d, p);
    }

    cout << cost << endl;
}