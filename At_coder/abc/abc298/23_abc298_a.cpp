#include <bits/stdc++.h>
using namespace std;

int main() {
    int n_int;
    string s_str;
    cin >> n_int >> s_str;

    bool ryou_bool = 0;

    for (int i = 0 ;i < n_int ;i++){
        switch (s_str[i]){
            case 'o': ryou_bool = 1;   break;
            case 'x': cout << "No" << endl; goto Huka;
            case '-': break;
        }

        
    }

    if (ryou_bool){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    Huka: ;


}