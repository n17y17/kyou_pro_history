WA
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q, l, r;
    cin >> n;
    map<int, long> a;
    int tmp1, tmp2;
    cin >> tmp1;
    a.insert(make_pair(0,0));
    auto itr=a.begin();
    for(int i=1; i<n; i+=2){
        cin >> tmp1;
        a.insert(make_pair(tmp1, (*itr).second));
        itr++;
        cin >> tmp2;
        a.insert(make_pair(tmp2, (*itr).second+tmp2-tmp1));
        itr++;
    }

    int ans=0;
    cin >> q;
    rep(i,q){
        ans=0;
        cin >> l >> r;
        auto itr1= a.upper_bound(l);
        auto itr2= a.lower_bound(r);
        itr2--;

        ans += (*itr1).first - l;
        ans += (*itr2).second - (*itr1).second;
        ans += r - (*itr2).first;
        cout << ans << endl;
    }
}