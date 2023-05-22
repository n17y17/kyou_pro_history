#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    if(c1==c2 && c2==c3) cout<< "Won" << endl;
    else cout<< "Lost" << endl;
}