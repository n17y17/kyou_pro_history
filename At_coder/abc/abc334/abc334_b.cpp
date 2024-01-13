#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

/*********
    WA
**********/

int main()
{
    long long int a, m, l, r;
    cin >> a >> m >> l >> r;
    cout << (r-a)/m - (l-a)/m + ((l-a)%m==0 ? 1 : 0) << endl;
}