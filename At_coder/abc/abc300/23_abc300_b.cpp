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

    bool all_ok_bool = 0;    

    int s_int = -1;
    int t_int = -1;
    for (int s =0 ;s < h_int ;s++){
        for (int t = 0 ;t < w_int ;t++){
            //sとtを変えて繰り返す
            bool ok_bool = 1;
            for (int i = 0;i < h_int ;i++){
                for (int j = 0 ;j < w_int ;j++){
                    if (A_achar[(i+s) % h_int][(j+t) % w_int] == B_achar[i][j]){
                        ok_bool *= 1;
                    } else {
                        ok_bool *= 0;
                        goto Exit;
                    }
                }
            }
            Exit:;
            if (ok_bool){
                all_ok_bool = 1;
                goto End;
            }
        }
    }

    End:;
    if (all_ok_bool){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}