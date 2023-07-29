#include <bits/stdc++.h>
using namespace std;
//AC

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s.at(i);

    rep(i, n-8) rep(j, m-8){
        for(int k=i; k<i+3; k++) for(int l=j; l<j+3; l++) if(s.at(k).at(l)=='.') goto Exit;
        for(int k=i+6; k<i+9; k++) for(int l=j+6; l<j+9; l++) if(s.at(k).at(l)=='.') goto Exit;

        for(int k=i; k<i+4; k++) if(s.at(k).at(j+3)=='#') goto Exit;
        for(int k=i+5; k<i+9; k++) if(s.at(k).at(j+5)=='#') goto Exit;

        for(int k=j; k<j+3; k++) if(s.at(i+3).at(k)=='#') goto Exit;
        for(int k=j+6; k<j+9; k++) if(s.at(i+5).at(k)=='#') goto Exit;

        cout << i+1 << ' ' << j+1 << endl;
        Exit:;
    }
}