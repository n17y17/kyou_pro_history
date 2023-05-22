#include <bits/stdc++.h>
using namespace std;

//----------サークル内コンテスト----------田近さんによるもの---------------------------

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; i++) cin >> h.at(i);
    int ans=0;
    int count=0;
    int high=0;

    for(int i=0; i<n; i++){
       if(h.at(i)>=high){
        count++;
        high = h.at(i);
       }
    }
    cout << count << endl;
}