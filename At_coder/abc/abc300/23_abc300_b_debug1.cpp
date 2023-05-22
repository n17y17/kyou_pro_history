#include <bits/stdc++.h>
using namespace std;

int main() {
    int h_int , w_int;
    cin >> h_int >> w_int;

    //Aの読み込み
    char A_achar[h_int][w_int];
    for (int i = 0 ;i < h_int ;i++){
        for (int j = 0 ;j < w_int ;j++) {
            cin >> A_achar[i][j];
        }
    }

    //Bの読み込み
    char B_achar[h_int][w_int];
    for (int i = 0 ;i < h_int ;i++){
        for (int j = 0 ;j < w_int ;j++) {
            cin >> B_achar[i][j];
        }
    }


    //Aの書き込み
    for (int i = 0 ;i < h_int ;i++){
        for (int j = 0 ;j < w_int ;j++) {
            cout << A_achar[i][j];
        }
        cout << endl;
    }

    //Bの書き込み
    for (int i = 0 ;i < h_int ;i++){
        for (int j = 0 ;j < w_int ;j++) {
            cout << B_achar[i][j];
        }
        cout << endl;
    }

    return 0;
}