#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string key, max_key;
    int n, value, max_value=-1;
    cin >> n;

    rep(i,n){
        cin >> key >> value;
        if(value > max_value){
            max_value = value;
            max_key = key;
        }
    }

    cout << max_key << endl;
}