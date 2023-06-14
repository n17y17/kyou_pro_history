#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> count(1e5+2,0);
    int a, n;
    cin >> n;
    rep(i,n){
        cin >> a;
        if(a>0) count.at(a-1)++;
        count.at(a)++;
        count.at(a+1)++;
    }
    int Max=0;
    for(int i=1; i<=1e5; i++){
        if(count.at(i)>Max){
            Max=count.at(i);
        }
    }
    cout << Max << endl;
}