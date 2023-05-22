#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    char s[8][8];
    for (int i = 0 ;i < 8 ;i++){
        cin >> s[i];
    }

    const char ah[8] = {'a','b','c','d','e','f','g','h'};

    for (int i = 0 ;i < 8 ;i++){
        for (int j = 0 ;j < 8 ;j++){
            if (s[i][j] == '*'){
                cout << ah[j] << 8-i << endl;
                return 0;
            }
        }
    }

}