#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s, t;
    cin >> s >> t;

    string s2=s, t2=t;
    rep(i, s.size()){
        if(s.at(i)!='@'){
            for(int j=0; j<t.size(); j++){
                if(s.at(i)==t.at(j)){
                    s.at(i)='*';
                    t.at(j)='*';
                    break;
                }
            }
        }
        
    }

    const vector<char> at={'a','t','c','o','d','e','r','@','*'};

    rep(i,s.size()){
        bool tf=true;
        rep(j,9){
            if(s.at(i)==at.at(j)) tf=false;
        }
        if(tf){
            cout << 'No' << endl;
            return 0;}

    }
    rep(i,t.size()){
        bool tf=true;
        rep(j,9){
            if(s.at(i)==at.at(j)) tf=false;
        }
        if(tf){
            cout << 'No' << endl;
            return 0;}

    }
    cout << 'Yes' << endl;
}