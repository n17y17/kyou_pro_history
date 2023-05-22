#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool IsInBoard(int y, int x){
    return (0<=y && y<10 && 0<=x && x<10);
}

const vector<char> dy = {-1,  0, +1,  0};
const vector<char> dx = { 0, +1,  0, -1};
void board_fill(int y, int x, vector<vector<char>> &board, vector<vector<bool>> &check){
    rep(i, 4){
        if(IsInBoard(y+1*dy.at(i), x+1*dx.at(i))) if(check.at(y+1*dy.at(i)).at(x+1*dx.at(i))==false && board.at(y+1*dy.at(i)).at(x+1*dx.at(i))=='o'){
            check.at(y+1*dy.at(i)).at(x+1*dx.at(i)) = true;
            board_fill(y+1*dy.at(i), x+1*dx.at(i), board, check);
        }
    }
}

int main() {
    vector<vector<char>> board(10, vector<char>(10));
    rep(i,10) rep(j,10) cin >> board.at(i).at(j);

    

    rep(i,10) rep(j,10){
        if(board.at(i).at(j)=='x'){
            vector<vector<bool>> check(10, vector<bool>(10,false));
            board_fill(i, j, board, check);
            rep(k,10) rep(l,10){
                if(board.at(k).at(l)=='o'){
                    if(check.at(k).at(l)==false) goto Exit;
                }
            }
            cout << "YES" << endl;
            return 0;
        }
        Exit:;
    }
    cout << "NO" << endl;
}