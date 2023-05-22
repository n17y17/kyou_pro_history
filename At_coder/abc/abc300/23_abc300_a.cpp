#include <bits/stdc++.h>
using namespace std;

int main() {
    int n_int ,a_int ,b_int;
    cin >> n_int >> a_int >> b_int;

    const int ANS_int = (a_int + b_int);

    const int N_cint = n_int;
    int c[N_cint];
    for (int i = 0 ;i < n_int;i++) {
        cin >> c[i];
        if (c[i] == ANS_int){
            cout << i+1 << endl;
        }
    }

    return 0;
}