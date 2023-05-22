#include <bits/stdc++.h>
using namespace std;

int main() {
    //行列Aの読み込み
    int n_int;
    cin >> n_int;

    bool A_abool[n_int][n_int];
    for (int i = 0 ;i < n_int ;i++){
        for (int j = 0 ;j < n_int ;j++) {
            cin >> A_abool[i][j];
        }
    }

    bool ok_bool = 1;
    //行列Bの読み込み
    bool B_abool[n_int][n_int];
    for (int i = 0 ;i < n_int ;i++){
        for (int j = 0 ;j < n_int ;j++) {
            cin >> B_abool[j][n_int-1-i];
            if (A_abool[j][n_int-1-i] != B_abool[j][n_int-1-i]){
                ok_bool = 0;
                goto Exit;
            }
        }
    }

    Exit:;

    if (ok_bool){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}