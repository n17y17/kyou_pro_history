#include <bits/stdc++.h>
using namespace std;
//WA

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    map<int, pair<int, int>> ab;
    int tmp;
    rep(i, n){
        cin >> tmp;
        if(ab.count(tmp)==0) ab[tmp] = {0, 0};
        ab[tmp].first++;
    }
    rep(i, m){
        cin >> tmp;
        if(ab.count(tmp)==0) ab[tmp] = {0, 0};
        ab[tmp].second++;
    }

    
    int sum = (*ab.begin()).second.first;
    auto ptr = ab.begin();
    ptr++;
    rep(i, ab.size()-1){
        sum = (*ptr).second.first = (*ptr).second.first + sum;
        ptr++;
    }
    ptr--;
    sum = (*ptr).second.second;
    ptr--;
    rep(i, ab.size()-1){
        sum = (*ptr).second.second = (*ptr).second.second + sum;
        ptr--;
    }
    
    ab[0] = {0, m};
    ab[1e9+1] = {n, 0};

    auto ptr1 = ab.begin();
    auto ptr2 = ab.begin();
    ptr1++;
    ptr2++;
    ptr2++;
    rep(i, ab.size()-1){
        if((*ptr2).second.first >= (*ptr2).second.second){
            if((*ptr1).second.first >= (*ptr2).second.second){
                cout << (*ptr1).first+1 << endl;
            }else{
                cout << (*ptr2).first<< endl;
            }
            return 0;
        }
        ptr1++;
        ptr2++;
    }
    
}