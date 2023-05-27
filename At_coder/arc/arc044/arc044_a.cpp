#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    long n;
    cin >> n;
    if(n==1){
        cout << "Not Prime" << endl;
        exit(0);
    }
    if(n<=3 || n==5){
        cout << "Prime" << endl;
        exit(0);
    }
    if(n%2) if(n%5) if(n%3){
        cout << "Prime" << endl;
        exit(0);
    }
    cout << "Not Prime" << endl;
}