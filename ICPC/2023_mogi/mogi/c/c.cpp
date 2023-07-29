#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, a, b, ans;
    while(true){
        cin >> n >> d;
        if(n==0 && d==0) return 0;
        ans = 0;
        vector<vector<int>> ab(n, vector<int>(3));
        for(int i=0; i<n; i++){
            cin >> a >> b;
            ab.at(i) = {a, -b, a};
        }
        for(int i=0; i<d; i++){
            sort(ab.begin(), ab.end());
            ans += ab.at(n).at(0);
            ab.at(n).at(0) += 2*ab.at(n).at(1);
            for(int j=0; j<n; j++) ab.at(j).at(0) = min(ab.at(j).at(0)-ab.at(j).at(1), ab.at(j).at(2));
        }
        cout << ans << endl;
    }
}