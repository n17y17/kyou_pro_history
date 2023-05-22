fail
#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    int m=0 ,i=1;
    do{
        m = a.at(m) - 1;
        if(m==1){
            cout << i << endl;
            return 0;
        }
        i++;
    }while(m!=0);
    cout << -1 << endl;
}