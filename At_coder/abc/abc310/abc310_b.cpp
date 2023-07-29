#途中
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> p_c(n, vector<int> (3));//pは負
    vector<vector<bool>> f(n, vector<bool>(m, 0));

    int p, c, f_tmp;
    rep(i, n){
        cin >> p >> c;
        p_c.at(i) = {-p, c, i};
        rep(j, c){
            cin >> f_tmp;
            f.at(i).at(f_tmp-1) = 1;
        }
    }

    sort(p_c.begin(), p_c.end());

    int c0;
    rep(i, n){
        c0 = p_c.at(i).at(0);
        num
        for(int j=i+1; j<n; j++){
            if(p_c.at(j).second < c0) continue;
            rep(k, m) if(f.at(i).at(k)==1 && f.at(j).at(k)==0) goto Exit;
            if(p_c.at(i).first == p_c.at(j).first){
                rep(k, m) if(f.at(i).at(k)==0 && f.at(j).at(k)==1){
                    printf("0, %d, %d, %d\n", i, j, k);
                    
                    cout << "Yes" << endl;
                    return 0;
                } 
            }else{
                printf("1, %d, %d\n", i, j);
                rep(k, m) cout << f.at(i).at(k);
                cout << endl;
                rep(k, m) cout << f.at(j).at(k);
                cout << endl;
                cout << "Yes" << endl;
                return 0;
            }
            Exit:;
        }
    }
    cout << "No" << endl;
}