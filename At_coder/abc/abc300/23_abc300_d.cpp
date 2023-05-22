#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N_llong;
    cin >> N_llong;

    

    int f_num = 0;
    long long temp_n_llong = N_llong;
    for (long long n_llong = 300 ;n_llong < N_llong ;n_llong++){
        temp_n_llong = n_llong;
        for (long a = 2 ;a < n_llong/17 ;a++){
            if (n_llong % (a*a) == 0 && n_llong % (a*a*a) != 0){
                temp_n_llong /= (a*a);
                for (long b = a+1 ;b < temp_n_llong ;b++){
                    if (temp_n_llong % b == 0 && temp_n_llong % (b*b) != 0){
                        temp_n_llong /= b;
                        for (long c = b+1 ;c < temp_n_llong/2 ;c++){
                            if (temp_n_llong % (c*c) == 0 && temp_n_llong / (c*c) == 1){
                                f_num ++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << f_num << endl;
    return 0;
}