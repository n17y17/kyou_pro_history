#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    int n ,a;
    cin >> n;
    rep(i ,n){
        cin >> a;
        if(a%2==0)
            cout << a << ' ';
    }
    cout << endl;
}