#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    set<string> s;
    string s1, s2;
    rep(i, n){
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s1 < s2) s.insert(s1);
        else s.insert(s2);
    }
    cout << s.size() << endl;
}