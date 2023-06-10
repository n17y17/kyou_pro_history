//AC
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    if((n%5)<3){
        cout << n-(n%5) << endl;
    }else{
        cout << n-(n%5)+5 << endl;
    }
}