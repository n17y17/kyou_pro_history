#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    map<int, int> a;

    int tmp, max_num=1, max_value;
    rep(i,n){
        cin >> tmp;
        if(a.count(tmp)){
            
            max_num = max(++a.at(tmp), max_num);
            if(a.at(tmp)==max_num) max_value = tmp;
            
        }
        else{
            a[tmp] = 1;
            if(a.at(tmp)==max_num) max_value = tmp;
        }
    }

    cout << max_value << ' ' << max_num << endl;
}