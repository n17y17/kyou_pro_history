#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using namespace std;

int main(){
    int n;
    string s;
    while(true){
        cin >> n >> s;
        vector<int> maru(0);
        if(n==0) return 0;
        int tmp=1;
        for(int i=1; i<s.size(); i++){
            if(s.at(i)=='o'){
                maru.push_back(tmp);
                tmp = 1;
            }else{
                tmp++;
            }
        }

        int ans=0;
        if(maru.size()<3){
            ans=maru.size();
        }else{
            int i=0;
            for(; i<(maru.size()-2); i++){
                if(maru.at(i)==maru.at(i+2)){
                    ans+=2;
                    i+=2;
                }else{
                    ans++;
                }
            }
            while(i<maru.size()){
                ans++;
                i++;
            }
        }
        cout << ans << endl;
    }
}