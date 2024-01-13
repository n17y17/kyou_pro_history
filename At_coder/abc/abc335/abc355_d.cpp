#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)


/**** 途中 ******/


int main()
{
    uint8_t n;
    scanf("%hhd", &n);
    
    vector<vector<int16_t>> grid(n+2, vector<int16_t>(n+2, 0));
    grid.at(0) = grid.at(n+1) = vector<int16_t>(n+2, -1);
    rep(i, n)
    {
        grid.at(i+1).at(0) = grid.at(i+1).at(n+1) = -1;
    }
    
    //行列
    //行列の出力
    for(int i = 0 ;i < n+2 ;i++){
        for(int j = 0 ;j < n+2 ;j++){
            cout << int(grid[i][j]);
        }
        cout << endl;
    }

}