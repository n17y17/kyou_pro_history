#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    int n;
    string s;
    cin >> n >> s;

    for (int i = 0 ;i < n-1 ;i++){
        if (s.at(i) == s.at(i+1)){
            cout << "No" << endl; 
            return 0;
        }
    }
    cout << "Yes" << endl;
}