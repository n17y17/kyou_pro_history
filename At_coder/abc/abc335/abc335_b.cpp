#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0, m = (int)(n); i < m; ++i)

int main()
{
    int n;
    cin >> n;
    rep(i0, n+1) rep(i1, n+1) rep(i2, n+1)
    {
        if (i0 + i1 + i2 > n)
        {
    break;
        }
        printf("%d %d %d\n", i0, i1, i2);
    }
}