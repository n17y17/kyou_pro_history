#include <bits/stdc++.h>
using namespace std;
 
int main() {
    short a ,b ,c;
    cin >> a >> b >> c;
    cout << max({a,b,c}) - min({a,b,c}) << endl;
}