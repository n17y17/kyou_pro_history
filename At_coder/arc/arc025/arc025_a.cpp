#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> d(7), j(7);
    rep(i,7) cin >> d.at(i);
    rep(i,7) cin >> j.at(i);

    int sum=0;
    rep(i,7) sum += max(d.at(i), j.at(i));
    cout << sum << endl;
}