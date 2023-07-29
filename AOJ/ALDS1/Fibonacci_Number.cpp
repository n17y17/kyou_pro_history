#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    vector<long long> f(n+1);
    f.at(0) = 1;
    if(n>0) f.at(1) = 1;

    for(int i=2; i<=n; i++){
        f.at(i) = f.at(i-1) + f.at(i-2);
    }

    cout << f.at(n) << endl;
}