#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short n;
    cin >> n;
    vector<short> a(n);
    rep(i,n)cin >> a.at(i);

    short alice = 0 ,bob = 0;
    sort(a.begin() ,a.end());
    while(n>1){
        alice += a.at(--n);
        bob += a.at(--n);
        }
    if(n%2==1) alice += a.at(0);
    
    cout << alice - bob << endl;
}