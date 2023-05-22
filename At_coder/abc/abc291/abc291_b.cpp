totyuu
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    deque<int> x(5*n);
    int value;
    rep(i,5*n){
        cin >> value;
        x.push_back(value);
    }

    sort(x.begin(), x.end());

    rep(i,n){
        x.pop_front();
        x.pop_back();
    }

    int sum=0;
    rep(i,x.size()) {sum+=x.at(i);cout << x.at(i) << endl;}
    cout << fixed << setprecision(6);
    cout << sum/x.size() << endl;
}