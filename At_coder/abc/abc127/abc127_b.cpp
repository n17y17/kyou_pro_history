#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//----------サークル内コンテスト----------田近さんによるもの---------------------------

int main() {
   int r, d, x;
   cin >> r >> d >> x;
   int num=x;
   for(int i=0; i<10; i++){
    
    cout << r * num - d << endl; 
    num = r * num - d;
   }
}