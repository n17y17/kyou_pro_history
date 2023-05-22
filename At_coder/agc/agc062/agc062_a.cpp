WA
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int t, n;
    cin >> t;

    string s;
    rep(i,t){
        cin >> n >> s;
        rep(j,s.size()-1){
            if(s.at(j)-s.at(j+1)==1){
                cout << 'A' << endl;
                goto Exit;
            }
        }
        cout << 'B' << endl;
        Exit:;
    }
}