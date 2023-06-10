//AC
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;  //高さと幅を入力
    //フィールドの周りを'.'で囲む
    vector<string> s(h+2);
    string tmp(w+2,'.'); //上下に'.'を追加する
    s[0]=s[h+1]=tmp;
    for(int i=1; i<=h; i++){
        cin >> tmp;
        s.at(i) = '.' + tmp + '.';  //左右に'.'を追加する
    }

    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            if(s.at(i).at(j)=='#') continue;
            if((s.at(i-1).at(j)=='#'||s.at(i+1).at(j)=='#')){
                if(s.at(i).at(j-1)=='#'||s.at(i).at(j+1)=='#'){
                    cout << i << ' ' << j << endl;
                    return 0;
                }
            }
        }
    }
}