#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)


void nCr(int ,int ,auto ,auto&);

void nCr_2(int ,int ,auto ,auto&);

void nCr_3(auto&, int, auto&, int i=0);




int main() {
/*
    //nC2
    //一つの配列内で組み合わせを考える
    int n_int;
    char a[n_int];

    for (int i = 0 ;i < n_int;i++){
        for (int j = i+1 ;j < n_int ;j++){ //同じものの組み合わせも考える場合，+1を消す
            //ここでa[i]とa[j]に関する処理を行う．
        }
    }
*/

    //nCr   a[0]~a[n-1]からr個を取り出す
    //nCr
    int n ,r;
    cin >> n >> r;
    vector<int> a(0) ,b(r);
    rep(i,n) a.push_back(i);
    nCr_3(a, r, b);
}

//nCr
void nCr(int n ,int r ,auto a ,auto& b){
    r--;
    while(r<n){
        n--;
        b[r]=a[n];
        if(!r){
            for(int i=0 ;i<b.size() ;i++) cout << b[i] << ' '; //b[0]-b[r-1]を使った式
            cout << endl;
            continue;
        }
        nCr(n ,r ,a ,b);
    }
}

//nCr_2
void nCr_2(int n ,int r ,auto &a ,auto &b){
    r--;
    while(n--){
        b[r]=a[n];
        if(!r){
            for(int i=0 ;i<b.size() ;i++) cout << b[i] << ' '; //b[0]-b[r-1]を使った式
            cout << endl;
            continue;
        }
        nCr(n ,r ,a ,b);
    }
}

//nCr_3
void nCr_3(auto &a, int r, auto &b, int i){
    if(i==r){
        //出力
        for(int i=0 ;i<b.size() ;i++) cout << b[i] << ' '; //b[0]-b[r-1]を使った式
        cout << endl;
        return;
    }
    for(int j=i; j<a.size(); j++){
        b.at(i) = a.at(j);
        nCr_3(a, r, b, j+1);
    }
}