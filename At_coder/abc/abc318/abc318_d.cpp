#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n;

uint64_t serch(vector<vector<uint32_t>>& d, vector<bool>& selected, int i, uint64_t max_num)
{
    uint32_t max_d = 0;
    int max_j = -1;
    rep(j, n)
    {
        if (selected.at(j)) continue;
        if (max_d < d.at(i).at(j))
        {
            max_d = d.at(i).at(j);
            max_j = j;
        }
    }
    if (max_j == -1)
    {
        return max_num;
    }
    selected.at(max_j) = 1;
    return serch(d, selected, max_j, max_num + max_d);
}

int main() {
    cin >> n;
    int tmp;
    vector<vector<uint32_t>> d(n, vector<uint32_t>(n, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            cin >> tmp;
            d.at(i).at(j) = d.at(j).at(i) = tmp;
        }
    }

    vector<bool> selected(n, 0);
    uint64_t max_num = 0;
    rep(i, n)
    {
        max_num = max (serch(d, selected, i, max_num), max_num);
    }
    cout << max_num << endl;
}