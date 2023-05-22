#include <bits/stdc++.h>
using namespace std;

//行列の読み込み

void input(int* ,long);


int main() {
    /*
    //１次元配列
    int n_int;
    cin >> n_int;
    vector<int> a (n_int);  //intかcharかに注意！
    for (int i = 0 ;i < n_int ;i++) cin >> a[i];
    */



    //正方行列　スペース区切り
    //N-->行列
    //行列の読み込み
    int n_int;
    cin >> n_int;

    vector<vector<int>> a (n_int ,vector<int>(n_int));  //intかcharかに注意！
    for (int i = 0 ;i < n_int ;i++){
        for (int j = 0 ;j < n_int ;j++) {
            cin >> a[i][j];
        }
    }

    //別の表現
    vector<vector<int>> a (n_int ,vector<int>(n_int));  //intかcharかに注意！
    for (long i = 0 ;i < n_int * n_int ;i++) cin >> *(&a[0][0]+i);






    //行列　スペース区切り
    //H-->W-->行列
    //行列の読み込み
    int h_int , w_int;
    cin >> h_int >> w_int;

    int A[h_int][w_int]; //intかcharかに注意！
    for (int i = 0 ;i < h_int ;i++){
        for (int j = 0 ;j < w_int ;j++) {
            cin >> A[i][j];
        }
    }

    //別の表現
    vector<vector<int>> a (h_int ,vector<int>(w_int));  //intかcharかに注意！
    for (long i = 0 ;i < h_int * w_int ;i++) cin >> *(&a[0][0]+i);

    //関数タイプ
    vector<vector<int>> a (h_int ,vector<int>(w_int));  //intかcharかに注意！
    input(&a[0][0] ,h_int * w_int);  //次元を変えるときにinputを変更する必要がない

    [](auto* p ,int i){while(i--) cin >> *(p++)}; //配列では使えるがvectorでは使えない
}

void input(int* p ,long n){ //次元に関係なく使える　nは要素数(縦×横)
    while(n--) cin >> *(p++); //配列では使えるがvectorでは使えない
}