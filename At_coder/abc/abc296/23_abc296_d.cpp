#include <bits/stdc++.h>
using namespace std;

inline long sqrt1(long n) {
    long l = 0, r = 1e6;
    while (r - l > 1) {
        long m = (l + r) / 2;
        (m * m <= n ? l : r) = m;
    }
    return l;
}

int main() {
    //input
    long long n ,m;
    cin >> n >> m;

    //Not exist
    if (n*n < m){
        cout << -1 << endl;
        return 0;
    }

    for (long long i = m ;true ;i++){
        for (long j = sqrt1(m) ;j > 0 ;j--){
            if (i%j == 0 && i/j <= n){
                cout << i << endl;
                return 0;
            }
        }
    }

}