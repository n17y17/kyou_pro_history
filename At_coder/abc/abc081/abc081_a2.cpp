#include <bits/stdc++.h>
using namespace std;

int main() {
    string input_str;
    cin >> input_str;
    cout << int( (input_str.at(0) + input_str.at(1) + input_str.at(2) - '0'*3 ) / ('1' - '0') ) << endl;
}