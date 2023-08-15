#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<deque<pair<int, char>>> c(m);
    string s;
    cin >> s;
    int c_in;
    rep(i, n){
        cin >> c_in;
        c.at(c_in-1).push_back({i, s.at(i)});
    }
    
    rep(i, m){
        int end = c.at(i).back().first;
        rep(j, c.at(i).size()-1){
            c.at(i).at(j+1).first = c.at(i).at(j).first;
        }
        c.at(i).at(0).first = end;
    }

    deque<pair<int, char>> b;
    rep(i, m){
        for(pair<int, char> pr : c.at(i)){
            b.push_back(pr);
        }
    }

    sort(b.begin(), b.end());

    rep(i, n) cout << b.at(i).second;
    cout << endl;

}