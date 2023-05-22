#include<bits/stdc++.h>
using namespace std;int main(){string s;cin>>s;long a=0,w=pow(26,s.size());for(char c:s)a+=(c-'A'+1)*(w/=26);cout<<a<<endl;}