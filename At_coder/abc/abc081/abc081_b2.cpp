#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    short n;
    cin >> n;
    vector<int> a(n);
    for(short i=0 ;i<n ;i++) cin>>a.at(i);

    for(int i=0 ;true ;i++){
        for(short j=0 ;j<n ;j++){
            if(a.at(j)%2){
                cout << i << endl;
                return 0;
            } else {
                a.at(j)/=2;
            }
        }
    }
}