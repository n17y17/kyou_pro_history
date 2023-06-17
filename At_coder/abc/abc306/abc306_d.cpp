#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<long> y(n);
    rep(i,n) cin >> x.at(i) >> y.at(i);

    long Max1=-1e9, Max2=-1e9, Max3=-1e9, befor = -1e15;
    long long ans=0;
    bool check;
    for(int i=0; i<n; i++){
        for(; x.at(i)==1 && i<n; i++){
            Max1 = max (Max1, y.at(i));
        }
        for(; x.at(i)==0 && i<n; i++){
            if(y.at(i)>=0){
                ans += y.at(i);
            }
            Max2 = max (Max2, y.at(i));
        }
        if(Max2<0){
            for(; x.at(i)==1 && i<n; i++){
                Max3 = max (Max3, y.at(i));
            }
            befor = max(befor, Max1);
            ans += (befor = max(max(befor, Max3), befor+Max2+Max3));
        }else{
            ans += Max1;
        }
    }
}