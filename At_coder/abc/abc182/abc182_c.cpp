#include <bits/stdc++.h>
ERROR
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;

    int zero=0, one=0, two=0;
    rep(i,s.size()){
        switch((s.at(i)-'0')%3){
            case 0:zero++; break;
            case 1: one++; break;
            case 2: two++; break;
        }
    }


    switch((one+2*two)%3){
        case 0: cout << 0 << endl; break;
        case 1: {
            if(one>0 && s.size()>1) cout << 1 << endl;
            else cout << -1 << endl;
            break;
        }
        case 2: {
            if(two>0 && s.size()>1) cout << 1 << endl;
            else if(one>=2 && s.size()>2) cout << 2 << endl;
            else cout << -1 << endl;
            break;
        }
    }
}