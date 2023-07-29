#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    double Min;
    long long minx, miny;

    while(true){
        cin >> a >> b;
        if(a==0 && b==0) return 0;
        Min = 1e9;
        for(int i=0; i<a; i++){
            if(Min > b*i/static_cast<double>(a) - b*i/a + 1e-10){
                if(b*i/static_cast<double>(a) - b*i/a != 0){
                    Min = b*i/static_cast<double>(a) - b*i/a;
                    minx = i;
                    miny = b*i/a;
                }
            }
            if(Min > b*i/a+1 - b*i/static_cast<double>(a) + 1e-10){
                if(b*i/a+1 - b*i/static_cast<double>(a) != 0){
                    Min = b*i/a+1 - b*i/static_cast<double>(a);
                    minx = i;
                    miny = b*i/a+1;
                }
            }
        }
        cout << minx << ' ' << miny << endl;
    }
}