// AC
#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    
    if (s == t.substr(0, n))
    {
        if (s == t.substr(m-n, n))
        {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    } else {
        if (s == t.substr(m-n, n))
        {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
}