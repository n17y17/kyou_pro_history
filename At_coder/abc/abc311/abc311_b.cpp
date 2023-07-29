#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);

    int Max_day = 0;
    int renzoku = 0;
    rep(i, d){
        rep(j, n) if(s.at(j).at(i) == 'x') goto Exit;
        Max_day = max(++renzoku, Max_day);
        continue;
        Exit:;
        renzoku = 0;
    }

    cout << Max_day << endl;
}