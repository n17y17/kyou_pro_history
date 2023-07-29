#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using namespace std;

int main(){
    int n;
    string s;
    while(true){
        cin >> n >> s;
        deque<int> maru(0);
        if(n==0) return 0;
        for(int i=1; i<s.size(); i++){
            if(s.at(i)=='o'){
                maru.push_back(i);
            }
        }

        
        deque<int> have;
        have.push_back(maru.at(0));
        have.push_back(n-maru.at(0));
        for(int j=0; j<maru.size(); j++){
            for(uint bit=0; bit<(1<<have.size()); bit++){
                int sum=0;
                for(int i=0; i<have.size(); i++){
                    if(bit&(1<<i)){
                        sum+=have.at(i);
                    }
                }
                if(sum==maru.at(j)) goto Exit;
            }
            int tmp=maru.at(j)-maru.at(j-1);
            have.pop_back();
            Exit:;
        }
    }
}