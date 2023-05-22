#include <bits/stdc++.h>
using namespace std;

int main() {
    string input_str;
    cin >> input_str;
    int int_a = 0;
    for (int i = 0 ;i < 3 ;i++) {
        if (input_str.at(i) == '1') int_a ++;
    }
    cout << int_a << endl;
}