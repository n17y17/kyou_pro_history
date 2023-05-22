#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    string s1, s2;
    cin >> n >> s1 >> q;
    s2 = s1.substr(n, n);
    s1 = s1.substr(0,n);

    int t, a, b;
    char *p1, *p2;
    rep(i,q){
        cin >> t >> a >> b;
        if(t==1){
            swap((a<=n ? s1.at(a-1) : s2.at(a-n-1)), (b<=n ? s1.at(b-1) : s2.at(b-n-1)));
        }else{
            swap(s1,s2);
        }
    }

    cout << s1 << s2 << endl;
}