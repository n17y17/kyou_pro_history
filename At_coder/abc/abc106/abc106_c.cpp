#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    long k;
    cin >> s >> k;
    
    for(long i=0; i<k; i++){
        if(s.at(i) != '1'){
            cout << s.at(i) << endl;
            return 0;
        }
    }
    cout << '1' << endl;
}