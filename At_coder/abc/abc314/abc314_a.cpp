#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    const string pi = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    cin >> n;
    // cout << pi.substr(0, n+1);
    if(n == 100) cout << pi << endl;
    else if(pi.at(n+2)-'0' < 5) cout << pi.substr(0, n+2) << endl;
    else if(n==3) cout << 3.142 << endl;
    else{
        cout << pi.substr(0, n-1);
        cout.fill('0');
        cout.width(3);
        cout << (pi.at(n-1)-'0')*100 + (pi.at(n)-'0')*10 + (pi.at(n+1)-'0') + 1 << endl;
    }
}