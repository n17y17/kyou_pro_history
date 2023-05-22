#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    string s;
    cin >> s;
    rep(i,s.size()/2){
        swap(s.at(2*i) ,s.at(2*i+1));
    }
    cout << s << endl;
}