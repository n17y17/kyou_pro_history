#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    
    int sum=0, tmp;
    for(int i=0; i<n-1; i++){
        cin >> tmp;
        sum += tmp;
    }

    if(sum+k < m*n){
        cout << -1 << endl;
        return 0;
    } else{
        cout << max(m*n - sum, 0) << endl;
    }
}