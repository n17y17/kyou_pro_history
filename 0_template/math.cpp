#include <bits/stdc++.h>
using namespace std;



//平方根より少し小さい数を出力
//10^17まで使える
unsigned long long sqrt1(unsigned long long n) {
    unsigned long long ans = n;
    for (long long i = 0 ;n+1 < ans*ans ;i++){
        ans = ((n/ans)+ans)/2 ;
        //cout << setw(5) << i+1 << " : " << setw(15) << ans << "  " << setw(15) << ans*ans << endl;
    }
    return ans;
}



//先輩a01sa01toからコピー
//平方根を返す //左右から挟み撃ち
long long sqrt2(long long n) {
    long long l = 0, r = 1e7;
    while (r - l > 1) {
        long long m = (l + r) / 2;
        (m * m <= n ? l : r) = m;
    }
    return l;
}


int main() {
    unsigned long long a;
    cin >> a;
    cout << sqrt1(a) << endl;
    return 0;
}

