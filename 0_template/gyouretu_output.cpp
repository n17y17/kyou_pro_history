#include <bits/stdc++.h>
using namespace std;

//行列の出力

void output(int* ,long);

int main() {
    //正方行列
    //行列の出力
    int n_int;

    int a[n_int][n_int];  //intかcharかに注意！
    for (int i = 0 ;i < n_int ;i++){
        for (int j = 0 ;j < n_int ;j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    //行列
    //行列の出力
    int h_int , w_int;
    vector<vector<int>> a (h_int ,vector<int> (w_int));
    for(int i = 0 ;i < h_int ;i++){
        for(int j = 0 ;j < w_int ;j++){
            cout << a[i][j];
        }
        cout << endl;
    }

    //改行を出力しない場合
    output(&a[0][0] ,h_int * w_int);

}

void output(int* p ,long n){ //intかcharかに注意！
    while(n--) cout << *(p++) << ' ';
    cout << endl;
}