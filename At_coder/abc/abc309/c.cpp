#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> ab(n);
    int a, b;
    rep(i, n){
        cin >> a >> b;
        ab.at(i) = {a, b};
    }

    sort(ab.begin(), ab.end());

    vector<long long> sum(n);
    sum.at(0) = ab.at(n-1).second;
    for(int i=1; i<n; i++){
        sum.at(i) = sum.at(i-1) + ab.at(n-i-1).second;
    }

    int i = n - (upper_bound(sum.begin(), sum.end(), k) - sum.begin()) -1;
    if(i == -1){
        cout << 1 << endl;
        return 0;
    }
    else{
        cout << ab.at(i).first + 1 << endl;
    }
    
}