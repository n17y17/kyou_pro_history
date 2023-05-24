#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x.at(i) >> y.at(i);

    int dx, dy;
    double ans=0;
    rep(i,n-1) for(int j=i+1; j<n; j++){ //nC2回行う
        dx=x.at(i)-x.at(j);
        dy=y.at(i)-y.at(j);
        ans += sqrt(dx*dx+dy*dy);
    }
    
    cout << fixed << setprecision(7) << (ans*2)/n << endl; //ans*(n-1)/nC2
}