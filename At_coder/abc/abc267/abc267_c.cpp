#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m, a;
    cin >> n >> m;

    vector<long long> s1(n+1), s2(n+1);
    s1.at(0) = s2.at(0) = 0;
    for(int i=1; i<=n; i++){
        cin >> a;
        s1.at(i) = s1.at(i-1) + i*a;
        s2.at(i) = s2.at(i-1) + a;
        cout << s1.at(i) << "  " << s2.at(i) << endl;
    }

    cout << "\n\n" << endl;

    long long ans=-1e11;
    for(int i=0; i<=(n-m); i++){
        ans = max(ans, (s1.at(i+m)-s1.at(i))-i*(s2.at(i+m)-s2.at(i)));
        cout << (s1.at(i+m)-s1.at(i))-i*(s2.at(i+m)-s2.at(i)) << endl;
    }
    cout << ans << endl;
}