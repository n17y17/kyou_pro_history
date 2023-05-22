#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    //mapの要素の最大値
    map<string ,short> temp_map;

    short max=0;
    decltype(temp_map)::iterator r = temp_map.begin();
    rep(i,temp_map.size()){
        if(r->second > max) max = r->second; //イテレーター(map版のポインタ)を一つずつ増やす  keyが欲しいときは->firstとする
        r++;
    }
}