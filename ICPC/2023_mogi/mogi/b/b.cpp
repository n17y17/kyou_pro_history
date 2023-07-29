#include <bits/stdc++.h>
using namespace std;

int main(){
    long y, r, c, x;
    while(true){
        cin >> y >> c >> r;
        if(y==0 && c==0 && r==0) return 0;
        x = 0;
        for(int i=0; i<y; i++){
            if((x*100)%(100+r)>0){
                x = (x * 100 / (100 + r)) + c + 1;
            }else{
                x = (x * 100 / (100 + r)) + c;
            }
        }
        cout << x << endl;
    }
}