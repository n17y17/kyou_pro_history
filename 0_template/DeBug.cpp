#include <bits/stdc++.h>
using namespace std;


template <class Type> Type DeBugOut(Type x){
    cout << x << endl;
}


//配列（配列先頭のポインタ,要素数）
//改行出力せず
void DeBugOut(int* p ,int n){ //intかcharかに注意！
    while(n--) cout << *(p++) << ' ';
    cout << endl;
}
//改行に対応（配列[2],行数,列数）
void DeBugOut(int* p ,int h ,int w){ //intかcharかに注意！
    while(h--){
        for(int i=0 ;i<w ;i++) cout << *(p++) << ' ';
        cout << endl;
    }
}

//minからmaxまでの整数
long long DeBugInNum(long long min ,long long max){
    srand(time(NULL));
    return min + rand() % max;
}

//ランダム入力　数値２次元 (h=1で１次元)
vector<vector<long long>> DeBugInRand(int h ,int w ,long long min ,long long max){
    srand(time(NULL));
    vector<vector<long long>> a (h ,vector<long long>(w));
    while(h) while(w) a[--h][--w] = min + rand() % max;;
    return a;
}

//ランダム入力　テキスト２次元
vector<vector<char>> DeBugInRand(int h ,int w ,string s){
    srand(time(NULL));
    vector<vector<char>> a (h ,vector<char>(w));
    while(h) while(w) a[--h][--w] = s.at(rand() % (s.size()-1)) ;;
    return a;
}

int main() {
    
    
}