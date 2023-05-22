#include <bits/stdc++.h>
using namespace std;

#define rep(i ,n) for(int i = 0 ;i < n ;i++)

int main() {
    int a ,b;
    cin >> a >> b;

    int count = 0;
    for(int i = a ;i <= b ;i++){
        vector<char> a(5);
        int tmp;
        a[0] = i/10000;
        tmp = i%10000;
        a[1] = tmp/1000;
        tmp %= 100;
        a[3] = tmp/10;
        a[4] = tmp%10;
        if(a[0]==a[4] && a[1]==a[3])
            count++;
    }

    cout << count << endl;
}