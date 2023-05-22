#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ,fn = 0;
    cin >> n;

    [&fn](int n){ do{fn += n%10;}while(n/=10);}(n);

    if(n%fn == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}