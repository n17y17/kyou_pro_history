#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, q;
    cin >> n >> q;
    vector<priority_queue<int>> pq(n);

    int sousa, t, x;
    rep(i,q){
        cin >> sousa >> t;
        switch(sousa){
            case 0: {
                cin >> x;
                pq.at(t).push(x);
                break;
            }
            case 1: {
                if(pq.at(t).size()){
                    cout << pq.at(t).top() << endl;
                }
                break;
            }
            case 2: {
                if(pq.at(t).size()){
                    pq.at(t).pop();
                }
                break;
            }
        }
    }
}