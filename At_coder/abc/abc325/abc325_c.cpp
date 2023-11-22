#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)


int h, w;

bool not_in(int x, int y)
{
    if (0 <= x && x < h && 0 <= y && y < w) return 0
    else return 1;
}

void serch(int x, int y, vector<vector<bool>>& checked)
{
    if (not_in(x, y))
return;
    if (checked.at(x).at(y))
return;

    checked.at(x).at(y) = 1;

    serch(x-1, y-1, checked);
    serch(x-1, y  , checked);
    serch(x-1, y+1, checked);
    serch(x  , y-1, checked);
    serch(x  , y+1, checked);
    serch(x+1, y-1, checked);
    serch(x+1, y  , checked);
    serch(x+1, y+1, checked);
}

int main()
{
    cin >> h >> w;

    vector<std::string> s(h);
    rep(i, h)
    {
        cin >> s.at(i);
    }

    vector<vector<bool>> checked(0, vector<bool>(0));

    serch(0, 0, checked);
}