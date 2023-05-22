#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 入力が，-か数字のみであることを考慮すれば，もっと簡単に解けた

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    rep(i,a){
        if(!('0'<=s.at(i) && s.at(i)<='9')){
            cout << "No" << endl;
            return 0;
        }
    }
    if(s.at(a)!='-'){
        cout << "No" << endl;
            return 0;
    }
    for(int i=a+1; i<s.size(); i++){
        if(!('0'<=s.at(i) && s.at(i)<='9')){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}