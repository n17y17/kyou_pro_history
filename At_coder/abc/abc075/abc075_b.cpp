#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short h ,w;
    cin >> h >> w;
    vector<string> s(h+2);
    string temp(w+2,'.');
    s[0]=s[h+1]=temp;
    rep(i,h) {
        cin >> s[i+1];
        s[i+1] = '.' + s[i+1] + '.';
    }


    rep(i,h) {
        rep(j,w) {
            if(s[i+1][j+1]=='#') cout << '#';
            else cout << (static_cast<short>(s[i][j]=='#')+static_cast<short>(s[i][j+1]=='#')+static_cast<short>(s[i][j+2]=='#')+static_cast<short>(s[i+1][j]=='#')+static_cast<short>(s[i+1][j+2]=='#')+static_cast<short>(s[i+2][j]=='#')+static_cast<short>(s[i+2][j+1]=='#')+static_cast<short>(s[i+2][j+2]=='#'));
        };
        cout << endl;
    };

}