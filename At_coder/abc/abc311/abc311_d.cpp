#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

vector<string> field;

void pull(int x, int y, int d){
    field.at(x).at(y) = '*';

    if(d==0){
        if(field.at(x  ).at(y-1)=='.') pull(x  , y-1, 0);
        else{
            if(field.at(x  ).at(y+1)=='.') pull(x  , y+1, 1);
            if(field.at(x-1).at(y  )=='.') pull(x-1, y  , 2);
            if(field.at(x+1).at(y  )=='.') pull(x+1, y  , 3);
        }
    }
    if(d==1){
        if(field.at(x  ).at(y+1)=='.') pull(x  , y+1, 1);
        else{
            if(field.at(x  ).at(y+1)=='.') pull(x  , y-1, 0);
            if(field.at(x-1).at(y  )=='.') pull(x-1, y  , 2);
            if(field.at(x+1).at(y  )=='.') pull(x+1, y  , 3);
        }
    }
    if(d==2){
        if(field.at(x-1).at(y  )=='.') pull(x-1, y  , 2);
        else{
            if(field.at(x  ).at(y+1)=='.') pull(x  , y+1, 1);
            if(field.at(x  ).at(y-1)=='.') pull(x  , y-1, 0);
            if(field.at(x+1).at(y  )=='.') pull(x+1, y  , 3);
        }
    }
    if(d==3){
        if(field.at(x+1).at(y  )=='.') pull(x+1, y  , 3);
        else{
            if(field.at(x  ).at(y+1)=='.') pull(x  , y+1, 1);
            if(field.at(x-1).at(y  )=='.') pull(x-1, y  , 2);
            if(field.at(x  ).at(y-1)=='.') pull(x  , y-1, 0);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    field.resize(n);
    rep(i, n) cin >> field.at(i);

    pull(1, 1, 1);
    pull(1, 1, 3);

    rep(i, n){
        rep(j, m) cout << field.at(i).at(j);
        cout << endl;
    }

    int ans=0;
    rep(i, n) rep(j, m) if(field.at(i).at(j)=='*') ans++;
    cout << ans << endl;
}