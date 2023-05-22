#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;  //高さと幅を入力
    //フィールドの周りを'*'で囲む
    vector<string> s(h+2);
    string tmp(w+2,'*'); //上下に'*'を追加する
    s[0]=s[h+1]=tmp;
    for(int i=1; i<=h; i++){
        cin >> tmp;
        s.at(i) = '*' + tmp + '*';  //左右に'*'を追加する
    }
    
    //８方向を調べていく
    const vector<signed char> dy = {-1,-1,-1, 0,+1,+1,+1, 0}; //どの方向に進んでいくか
    const vector<signed char> dx = {-1, 0,+1,+1,+1, 0,-1,-1};

    char ok=1;
    for(int i=1; i<=h; i++) for(int j=1; j<=w; j++){
        if(s.at(i).at(j)!=なんらかの値) continue;  //無視するマスを指定

        rep(k,8){  //8方向について調べる
            for(int l=1; l<=すうじ; l++)  //何マス先まで調べるかを指定
                if(s.at(i+l*dy.at(k)).at(j+l*dx.at(k)) != あたい) {ok=0; break;}  //(i,j)のエル マス先が特定の値であるか調べる（配列を作ってエル番目と比較しても良いかも）
            if(ok++){
                //lエル マス先まで特定の値だった場合の処理
                //return 0;
            }
        }

        
    }
}