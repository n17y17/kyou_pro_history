#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, u, k, v;
    cin >> n;
    vector<vector<int>> g(n);
    rep(i, n){
        cin >> u >> k;
        u--;
        rep(j, k){
            cin >> v;
            g.at(u).push_back(v-1);
        }
    }

    queue<int> que;
    vector<int> dist(n, -1);
    que.push(0);
    dist.at(0) = 0;
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int next_v : g.at(v)){
            if(dist.at(next_v) != -1) continue;
            dist.at(next_v) = dist.at(v) + 1;
            que.push(next_v);
        }
    }
    rep(i, n){
        
    }
}