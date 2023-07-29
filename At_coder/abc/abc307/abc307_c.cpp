#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int ha, wa, hb, wb, hx, wx;
    cin >> ha >> wa;
    vector<string> a(ha);
    rep(i,ha) cin >> a.at(i);
    cin >> hb >> wb;
    vector<string> b(hb);
    rep(i,hb) cin >> b.at(i);
    cin >> hx >> wx;
    vector<string> x(hx);
    rep(i,hx) cin >> x.at(i);

    for(int i=1-ha; i<hx-1; i++){
        for(int j=1-wa; j<wx-1; j++){
            rep(k,ha){
                rep(l,wa){
                    if(a.at(k).at(l)=='#'){
                        if(k+i<0 || hx<=k+i || l+j<0 || wx<=l+j) goto Exit1;
                        if(x.at(k+i).at(l+j) == '.') goto Exit1;
                    }
                }
            }
            for(int k=1-hb; k<hx-1; k++){
                for(int l=1-wb; l<wx-1; l++){
                    for(int m=1-hb; m<hx+hb-1; m++){
                        for(int n=1-wb; n<wx+wb-1; n++){
                            if((0<=m-i && m-i<ha && 0<=n-j && n-j<wa && a.at(m-i).at(n-j)=='#') || (0<=m-k && m-k<hb && 0<= m-l && m-l<wb && b.at(m-k).at(m-l)=='#')){
                                if(0<=m || m<hx || 0<=n || n<wx || x.at(m).at(n)=='.') goto Exit2;
                            }else{
                                if(0<=m && m<hx && 0<=n && n<wx && x.at(m).at(n)=='#') goto Exit2;
                            }
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                    Exit2:;
                }
            }
            Exit1:;
        }
    }
    cout << "NO" << endl;
}