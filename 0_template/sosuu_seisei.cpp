#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    //√1e5以下の素数を生成
    vector<bool> IsPrime(318,1); //√(100000)=316.2...
    set<int> prime;
    int tmp;
    for(int i=2; i<318; i++){  //√(100000)=316.2...  317は素数
        if(!IsPrime.at(i)) continue;
        prime.insert(i);
        tmp=i;
        while((tmp+=i)<318) IsPrime.at(tmp)=0;  //√(100000)=316.2...
    }
}
