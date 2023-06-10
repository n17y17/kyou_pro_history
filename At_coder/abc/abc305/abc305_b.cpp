//AC
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    const vector<int> a={3,1,4,1,5,9};
    char p, q;
    cin >> p >> q;

    p-='A';
    q-='A';
    int ans=0;
    for(int i=min(p,q); i<max(p,q); i++){
        ans+=a.at(i);
    }
    cout << ans << endl;
}