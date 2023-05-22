#include <bits/stdc++.h>
using namespace std;

int main() {
    int n_int;
    cin >> n_int;
    int a[n_int];
    for(int i=0 ;i < n_int ;i++) cin >> a[i];
    int counta_int = 0;
    for( ; ;counta_int++){
        for(int i = 0 ;i < n_int ;i++){
            if (a[i] % 2 != 0) goto Exit;
            a[i] /= 2;
        }
    }
    Exit :cout << counta_int << endl;
}