#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

//処理1と処理2が，全通り(n回)実行される



int n ,ans;

void nPn(int i ,int x){
    if(i>n){
        ans = min(x ,ans);  //xとansを使って答えを決める
        return;
    }
    nPn(i+1 ,x+x); //xを使った処理1
    nPn(i+1 ,x*x); //xを使った処理2
}

int main() {
    nPn(0,1); //1をxの初期値にしている
}