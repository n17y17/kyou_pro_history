#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int q;
    cin >> q;

stack<string> book;
string x;
int sousa;
    rep(i,q){
        cin >> sousa;
        switch(sousa){
            case 1: cin >> x; book.push(x); break;
            case 2: cout << book.top() << endl; break;
            case 3: book.pop(); break;
        }
    }
}