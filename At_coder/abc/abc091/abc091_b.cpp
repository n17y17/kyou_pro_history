#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    short n;
    cin >> n;
    map<string ,short> yen;
    vector<string> s(n);
    rep(i,n){
        cin >> s.at(i);
        if(yen.find(s.at(i)) != yen.end())  yen.at(s.at(i)) ++;
        else yen.insert(make_pair(s.at(i) ,1));
    }

    short m;
    cin >> m;
    vector<string> t(m);
    rep(i,m){
        cin >> t.at(i);
        if(yen.find(t.at(i)) != yen.end())  yen.at(t.at(i)) --;
        else yen.insert(make_pair(t.at(i) ,-1));
    }

    short max=0;
    decltype(yen)::iterator r = yen.begin();
    rep(i,yen.size()){
        if(r->second > max) max = r->second;
        r++;
    }
    cout << max << endl;
}