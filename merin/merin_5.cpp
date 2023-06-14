#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string s;
    int n;
    char a;
    cin >> s >> n >> a;

    for(int i=s.size(); i<n; i++) s+=a;
    cout << s << endl;
    
}