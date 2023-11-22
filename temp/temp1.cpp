#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

double not0_2(auto &n){
    return (n ? n : 1);
}

auto not0 = [](auto b){return (b ? b : 1);};

auto not0_3 = [](auto &b)->double{return (b ? b : 1);};

int main() {
    int a;
    cin >> a;
    long long int i = 1e10;
    while(i--) not0(a);
    cout << 1 << endl;
    // i = 1e10;
    // while(i--) not0_3(a);
    // cout << 1 << endl;
    // i = 1e10;
    // while(i--) not0_2(a);
    // cout << 1 << endl;
    i = 1e10;
    while(i--) {int b = a; (b ? b : 1);}
    cout << 1 << endl;
    // i = 1e10;
    // while(i--) {int b = a; if(b) b; else 1;}
    // cout << 1 << endl;
}