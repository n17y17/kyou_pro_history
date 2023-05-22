#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short n;
    cin >> n;
    char s;
    rep(i,n) {
        cin >> s;
        if(s == 'Y'){
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << "Three" << endl;
}