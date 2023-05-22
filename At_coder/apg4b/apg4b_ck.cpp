#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    string s;
    cin >>s;
    
    short ans=1;
    rep(i ,s.size()/2) {
        if(s.at(i*2+1) == '+'){
            ans++;
        } else{
            ans--;
        }
    }
    cout << ans << endl;
}