#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)


int main(){
    chrono::system_clock::time_point  start, end; // 型は auto で可
    start = chrono::system_clock::now(); // 計測開始時間
// 処理
    end = chrono::system_clock::now();  // 計測終了時間
    double elapsed = chrono::duration_cast<chrono::milliseconds>(end-start).count(); //処理に要した時間をミリ秒に変換
    cout << elapsed << "ms" << endl;
}
/*

chrono::duration_cast<変換型>(duration)の変換型には，ナノ秒（nanoseconds），マイクロ秒（microseconds），ミリ秒（microseconds），秒（seconds） を指定できる．

*/

// https://qiita.com/yukiB/items/01f8e276d906bf443356  より引用