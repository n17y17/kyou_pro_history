#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)

int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0) return 0;
        int m, Max=0;
        rep(i,n){
            cin >> m;
            Max = max(Max, m);
        }
        cout << Max << endl;
    }
}