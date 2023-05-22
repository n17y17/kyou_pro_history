#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    long n , x;
    cin >> n >> x;
    //const long N = n;
    long a[n];
    for (long i = 0 ;i < n ;i++) cin >> a[i];

    //xだけシフトした場所を記録
    bool hit[static_cast<long>(2e9+1)] = {0};

    //nCr
    for (long i = 0 ;i < n;i++){
        if (hit[static_cast<long>(a[i] + 1e9)]){
            cout << "Yes" << endl;
            return 0;
        } else{
            if ((a[i] + abs(x)) <= 1e9){
                hit[static_cast<long>(a[i] + 1e9 + abs(x))] = 0;
            }
            if ((a[i] - abs(x)) >= -1e9){
                hit[static_cast<long>(a[i] + 1e9 - abs(x))] = 0;
            }
        }
    }

    cout << "No" << endl;
}