#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    vector<vector<int>> masu = {{0, 0, 0, 0, 0}, {0, 1, 2, 3, 0}, {0, 4, 5, 6, 0}, {0, 7, 8, 9, 0}, {0, 0, 0, 0, 0}};
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            if(masu.at(i).at(j)==a){
                if(masu.at(i).at(j-1)==b || masu.at(i).at(j+1)==b){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
}