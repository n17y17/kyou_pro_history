#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    rep(i,n-1){
        cout << a.at(i) << ' ';
        if(a.at(i) < a.at(i+1)){
            for(int j=1; a.at(i)+j < a.at(i+1); j++) cout << a.at(i)+j << ' ';
        } else{
            for(int j=1; a.at(i)-j > a.at(i+1); j++) cout << a.at(i)-j << ' ';
        }
    }
    cout << a.at(n-1) << endl;
}