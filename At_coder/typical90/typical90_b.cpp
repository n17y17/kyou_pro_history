#include <bits/stdc++.h>
using namespace std;

int main() {
    short n;
    cin >> n;
    if(n%2 == 1) return 0;

    string s;
    
    sort(&s[0],&s[9]);
    cout << s << endl;

}