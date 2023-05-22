#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a<b){
        if(b<c){
            cout << "3\n2\n1" << endl;
        }else{
            if(a<c){
                cout << "3\n1\n2" << endl;
            }else{
                cout << "2\n1\n3" << endl;
            }
        }
    }else{
        if(a<c){
            cout << "2\n3\n1" << endl;
        }else{
            if(b<c){
                cout << "1\n3\n2" << endl;
            }else{
                cout << "1\n2\n3" << endl;
            }
        }
    }
}