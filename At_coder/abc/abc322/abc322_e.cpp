#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(k, 0));
    rep(i, n)
    {
        cin >> c.at(i);
        rep(j, k) cin >> a.at(i).at(j);
    }

    rep(i, n)
    {
        rep(j, n)
    }
}