#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long max_ullong;
    cin >> max_ullong;

    vector<unsigned long long> prime_number_vullong = {2};
    
    bool temp_ok_bool = 1;
    for (unsigned long long i = 3 ;i < max_ullong ;i += 2){
        temp_ok_bool = 1;
        for (unsigned long long j = 0 ;j < prime_number_vullong.size() ;j++){
            if (i % prime_number_vullong[j] == 0){
                temp_ok_bool = 0;
                break;
            }
        }

        if (temp_ok_bool){
            prime_number_vullong.push_back(i);
            cout << setw(10) << i << endl; //10は数字の幅
            //差を出力
            //cout << setw(10) << i - prime_number_vullong[prime_number_vullong.size()-2] << endl; //10は数字の幅
        }
    }

    cout << prime_number_vullong.size() << "個の素数が出力されました" << endl;


    return 0;
}