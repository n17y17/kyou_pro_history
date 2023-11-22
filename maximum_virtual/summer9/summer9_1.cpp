#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string n;
    cin >> n;
    for (int i = 0; i < n.size() / 2; i++)
    {
        if (n.at(i) != n.at(n.size() - i -1))
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}