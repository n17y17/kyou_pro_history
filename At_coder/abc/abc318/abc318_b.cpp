#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    vector<vector<bool>> field(100, vector<bool>(100, 0));
    int a, b, c, d;
    rep(i, n)
    {
        cin >> a >> b >> c >> d;
        for (int j = a; j < b; ++j) for (int k = c; k < d; ++k)
        {
            field.at(j).at(k) = 1;
        }
    }

    int count = 0;
    rep(i, 100) rep(j, 100)
    {
        if(field.at(i).at(j)) ++count;
    }
    cout << count << endl;
}