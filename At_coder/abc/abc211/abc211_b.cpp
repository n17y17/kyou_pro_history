#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    set<string> s;

    string tmp;
    rep(i,4){
        cin >> tmp;
        s.insert(tmp);
    }

    if(s.size()==4){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}