#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    string s;
    cin >> n >> s;

    bool a=0, b=0, c=0;
    rep(i, n){
        if(s.at(i)== 'A') a=1;
        if(s.at(i)== 'B') b=1;
        if(s.at(i)== 'C') c=1;

        if(a && b && c){
            cout << i+1 << endl;
            return 0;
        }
    }
}