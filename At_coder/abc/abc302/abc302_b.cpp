#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h+2);
    string temp(w+2,'*'); //上下に'*'を追加する
    s[0]=s[h+1]=temp;
    for(int i=1; i<=h; i++){
        cin >> s.at(i);
        s.at(i) = '*' + s.at(i) + '*';
    }
    const string snuke = "snuke";

    char ok=1;
    for(int i=1; i<=h; i++) for(int j=1; j<=w; j++){
        if(s.at(i).at(j)!='s') continue;

        for(int k=1; k<=4; k++) if(s.at(i-k).at(j-k) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i-k << ' ' << j-k << endl;   return 0;}

        for(int k=1; k<=4; k++) if(s.at(i-k).at(j) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i-k << ' ' << j << endl;   return 0;}

        for(int k=1; k<=4; k++) if(s.at(i-k).at(j+k) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i-k << ' ' << j+k << endl;   return 0;}

        for(int k=1; k<=4; k++) if(s.at(i).at(j+k) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i << ' ' << j+k << endl;   return 0;}

        for(int k=1; k<=4; k++) if(s.at(i+k).at(j+k) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i+k << ' ' << j+k << endl;   return 0;}

        for(int k=1; k<=4; k++) if(s.at(i+k).at(j) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i+k << ' ' << j << endl;   return 0;}

        for(int k=1; k<=4; k++) if(s.at(i+k).at(j-k) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i+k << ' ' << j-k << endl;   return 0;}

        for(int k=1; k<=4; k++) if(s.at(i).at(j-k) != snuke.at(k)) {ok=0; break;}
        if(ok++){rep(k,5) if(ok) cout << i << ' ' << j-k << endl;   return 0;}

        
    }
}