#include <bits/stdc++.h>
using namespace std;

    int main(){
        while(true){
            int n,m,p,q;
            cin >> n >> m >> p >> q;
            if(n==0&&m==0) break;
            vector<int> x(m);
            for(int i = 0;i<m;i++){
                cin >> x.at(i);
            }
            vector<int> iki(m+1,-1);
            vector<int> kaeri(m+1,-1);
            iki.at(0)=p;
            for(int i=0;i<m;i++){
                if(iki.at(i)==x.at(i)){
                    iki.at(i+1)=x.at(i)+1;
                }
                else if(iki.at(i)==x.at(i)+1){
                    iki.at(i+1)=x.at(i);
                } 
                else{
                    iki.at(i+1)=iki.at(i);
                }
            }
            kaeri.at(m)=q;
            for(int i=m;i>0;i--){
                if(kaeri.at(i)==x.at(i-1)){
                    kaeri.at(i-1)=x.at(i-1)+1;
                }
                else if(kaeri.at(i)==x.at(i-1)+1){
                    kaeri.at(i-1)=x.at(i-1);
                }
                else{
                    kaeri.at(i-1)=kaeri.at(i);
                }
            }
            if(iki.at(m)==q){
                cout << "OK" << endl;
            }
            else{
                for(int i=0;i<m+1;i++){
                    if(kaeri.at(i)-iki.at(i)==1){
                        cout << iki.at(i) << " " << i << endl;
                        break;
                    }
                    else if(iki.at(i)-kaeri.at(i)==1){
                        cout << kaeri.at(i) << " " << i << endl;
                        break;
                    }
                    else{
                        if(i==m){
                            cout << "NG" << endl;
                            break;
                        }
                    }
                }
            }
            // for(int i=0;i<m+1;i++){
            //     cout << iki.at(i) << " " << kaeri.at(i) << endl;
            // }
        }
    }