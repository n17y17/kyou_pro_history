#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    uint64_t n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
return 0;
    }

    uint64_t l = 0, r = n, m;
    while (r - l > 1) {
        m = (l + r) / 2;
        (m * m <= n ? l : r) = m;
    }

    vector<uint32_t> vec(l, 0);
    uint32_t j = 0;
    
    for (uint32_t i = 1; i <= l; ++i)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            vec[j++] = n / i;
        }
    }

    if (vec[j-1] * vec[j-1] == n)
    {
        for (int32_t k = j-2; k >= 0; --k)
        {
            cout << vec[k] << endl;
        }
    } else {
        for (int32_t k = j-1; k >= 0; --k)
        {
            cout << vec[k] << endl;
        }
    }
}