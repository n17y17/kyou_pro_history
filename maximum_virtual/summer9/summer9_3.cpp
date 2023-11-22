#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> num;
    vector<pair<string, string>> st(n);
    string s, t;
    rep(i, n)
    {
        cin >> s >> t;
        st.at(i) = {s, t};
        ++num[s];
        ++num[t];
    }

    for (pair<string, string> pr : st)
    {
        if (pr.first == pr.second && num.at(pr.first) == 2)
    continue;
        if (num.at(pr.first) > 1 && num.at(pr.second) > 1)
        {
            cout << "No" << endl;
return 0;
        }
    }
    cout << "Yes" << endl;
}