#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0) return 0;
        int a;
        int Min=1e5, number;
        for(int i=0; i<n; i++){
            cin >> a;
            if(abs(a-2023)<Min){
                number = i;
                Min = abs(a-2023);
            }
        }
        cout << number+1 << endl;
    }
}