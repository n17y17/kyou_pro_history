//深さ優先探索
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int h, w;

void serch(int y, int x, vector<vector<char>> &board){
    if(y<0 || h<=y || x<0 || w<=x) return;
    if(board.at(y).at(x)=='*' || board.at(y).at(x)=='#') return;
    if(board.at(y).at(x)=='g'){
        cout << "Yes" << endl;
        exit(0);
    }

    board.at(y).at(x)='*';

    serch(y-1, x  , board);
    serch(y  , x+1, board);
    serch(y+1, x  , board);
    serch(y  , x-1, board);
}


int main() {
    cin >> h >> w;
    vector<vector<char>> board(h, vector<char>(w));
    vector<int> s(2);
    rep(i,h) rep(j,w){
        cin >> board.at(i).at(j);
        if(board.at(i).at(j)=='s'){
            s.at(0)=i;
            s.at(1)=j;
        }
    }

    serch(s.at(0), s.at(1), board);
    cout << "No" << endl;
}