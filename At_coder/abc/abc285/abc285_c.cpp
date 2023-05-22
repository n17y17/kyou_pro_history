#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    long ans;
    //等比数列の和の公式
    ans = ((static_cast<long>(pow(26, s.size()-1)) - 1) *26 /25);
    
    long base=1;
    for(int i=s.size()-1; i>=0; i--, base*=26){
        ans += (s.at(i)-'A')*base;
    }
    cout << ++ans << endl;
}