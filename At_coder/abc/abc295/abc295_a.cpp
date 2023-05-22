#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    string w;
    const vector<string> words = {"and","not","that","the","you"};
    rep(i,n){
        cin >> w;
        for(string word:words){
            if(w==word){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}