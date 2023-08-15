#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> c(n, 0); //かけた数
    vector<deque<pair<int, int>>> a(37);
    int tmp;
    rep(i, n){
        cin >> c.at(i);
        rep(j, c.at(i)){
            cin >> tmp;
            a.at(tmp).push_back({c.at(i), i});
        }
    }
    int x;
    cin >> x;

    sort(a.at(x).begin(), a.at(x).end());
    if(a.at(x).size()){
        int Min = a.at(x).at(0).first;
        deque<int> b;
        rep(i, a.at(x).size()){
            if(a.at(x).at(i).first == Min)
                b.push_back(a.at(x).at(i).second+1);
        }
        cout << b.size() << endl;
        for(int i : b) cout << i << ' ';
    }
    else cout << 0 << endl;
    cout << endl;
}