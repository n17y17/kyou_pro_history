#include <bits/stdc++.h>
using namespace std;

int main() {
    //行列の読み込み
    int h_int , w_int;
    cin >> h_int >> w_int;

    char C_achar[h_int][w_int] = {'0'}; //intかcharかに注意！
    for (int i = 0 ;i < h_int ;i++){
        for (int j = 0 ;j < w_int ;j++) {
            cin >> C_achar[i][j];
        }
    }

    //×の個数の配列
    const int A_int = h_int + w_int;
    int batu_aint[A_int] = {0};

    int sharp_int = 0;
    //斜め方向に探索
    for (int i = 0 ;(i < h_int) && (i < w_int)  ;i++){
        for (int j = 0 ;j < i+1 ;j++){
            if (C_achar[i-j][j] == '#'){
                sharp_int ++;
            }else{
                if (sharp_int != 0){
                    batu_aint[(sharp_int-1) / 2] += 1;
                    sharp_int = 0;
                }
            }
            
        }
        
    }
    for (int i = h_int ;i < w_int ;i++){
        for (int j = 0 ;j < i+1 ;j++){
            if (C_achar[i][j-i] == '#'){
                sharp_int ++;
            }else{
                if (sharp_int != 0){
                    batu_aint[(sharp_int-1) / 2] += 1;
                    sharp_int = 0;
                }
            }
            
        }
        
    }

    return 0;
}