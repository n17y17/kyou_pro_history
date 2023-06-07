#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    string s;
    set<string> w;
    char end;
    rep(i,n){
        cin >> s;
        if(i==0 || (i!=0 && s.at(0)==end && w.count(s)==0)){
            w.insert(s);
            end = s.back();
        }else {
            if(i%2){
                cout << "WIN" << endl;
            }else {
                cout << "LOSE" << endl;
            }
            return 0;
        }
    }
    cout << "DRAW" << endl;
}