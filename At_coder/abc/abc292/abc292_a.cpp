#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    rep(i,s.size()){
        cout << toupper(s.at(i));
    }
    cout << endl;
}