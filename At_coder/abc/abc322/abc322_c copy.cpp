#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
    int n, m;
    vector<int> a;
    cin >> n >> m;
    int tmp;
    rep(i, m)
    {
        std::cin >> tmp;
        a.push_back(tmp);
    }

    vector<int> ans(n);
    int count = 0;
    for (int i=n-1; i>=0; --i, ++count)
    {
        if (a.back() == i+1)
        {
            a.pop_back();
            count = 0;
        }
        ans.at(i) = count;
    }

    rep(i, n) cout << ans.at(i) << endl;
}