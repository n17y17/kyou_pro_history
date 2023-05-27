#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m, h, k;
    string s;
    cin >> n >> m >> h >> k >> s;

    int x, y;
    map<pair<int,int>, bool> kaihuku;
    rep(i,m){
        cin >> x >> y;
        kaihuku[make_pair(x,y)] = 1;
    }

    vector<int> now = {0, 0};

    rep(i,n){
        h--;
        switch(s.at(i)){
            case 'R': now.at(0)++; break;
            case 'L': now.at(0)--; break;
            case 'U': now.at(1)++; break;
            case 'D': now.at(1)--; break;
        }

        if(h<0){
            cout << "No" << endl;
            exit(0);
        }else{
            if(h<k) if(kaihuku[make_pair(now.at(0),now.at(1))]){
                h=k;
                kaihuku[make_pair(now.at(0),now.at(1))]=0;
            }
        }
    }
    cout << "Yes" << endl;
}