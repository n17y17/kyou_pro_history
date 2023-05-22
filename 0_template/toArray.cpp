#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)


int main() {
    //001234 --> {1,2,3,4}   引数(出力先配列,自然数)
    auto toArray = [](auto& a,int n){ do{a.insert(a.begin() ,n%10);}while(n/=10);};

    //001234 --> {0,0,1,2,3,4}   引数(出力先配列,自然数,出力要素数)
    auto toArray0 = [](auto& a,int n ,int i){ do{a.insert(a.begin() ,n%10);}while(n/=10 ,--i); };



    int n;
    cin >> n;
    vector<int> a;
    
    rep(i,3) toArray(a ,n);
    rep(i,a.size())cout << a[i] << endl;
    cout << n << endl;
    
}