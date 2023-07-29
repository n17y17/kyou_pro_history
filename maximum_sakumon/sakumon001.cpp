#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    if(n < 0){
        // 負の数だったら-1
        cout << -1 << endl;
    }else if(n == 0){
        cout << 0 << endl;
    }else{
        // 正の数だったら二進数にする
        deque<int> ans;
        for(uint bit=1; bit<=n; bit<<=1){
            ans.push_front((n & bit) > 0);
        }
        for(int i : ans) cout << i;
        cout << endl;
    }
}