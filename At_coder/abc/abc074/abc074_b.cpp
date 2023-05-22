#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short n ,k ,sum = 0 ,x;
    cin >> n >> k;
    rep(i,n){
        cin >> x;
        sum += ((x < k-x) ? x : k-x)*2;
    }
    cout << sum << endl;
}