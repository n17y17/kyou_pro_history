#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    rep(i, n){
        vector<bool> checked(n, 0);
        deque<int> deq;
        int now = i, next;
        deq.push_back(i);
        checked.at(i) = true;
        while(true){
            next = a.at(now)-1;
            if(checked.at(next) == true){
                int j=0;
                while(deq.at(j++)!=next);
                cout << deq.size()-j+1 << endl;
                for(; j<deq.size(); j++){
                    cout << deq.at(j-1)+1 << ' ';
                }
                cout << deq.back()+1 << endl;
                return 0;
            }
            checked.at(next) = true;
            deq.push_back(next);
            swap(now, next);
        }
    }

}