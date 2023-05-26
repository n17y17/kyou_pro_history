#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<bool> IsPrime(100004,1);
    int x;
    cin >> x;
    
    int tmp;
    for(int i=2; i<100004; i++){
        if(! IsPrime.at(i)) continue;
        if(x<=i){
            cout << i << endl;
            exit(0);
        }
        tmp = i;
        while((tmp+=i)<100004) IsPrime.at(tmp)=0;
    }
}