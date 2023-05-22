#include <bits/stdc++.h>
using namespace std;

int main() {
    
}

/*
At-coderで十分に表せる範囲
(s)char -1e2 ~ 1e2
uchar   0 ~ 2e2

sshort  -3e4 ~ 3e4
ushort  0 ~ 6e4

sint    -2e9 ~ 2e9
uint    0 ~ 4e9

slong   -9e18 ~ 9e18 (環境によっては+-2e9)
ulong   0 ~ 1e19  (環境によっては4e9)

sllong  -9e18 ~ 9e18
ullong   0 ~ 1e19

小数型はいずれも有効数字６桁
10の指数が違う
float   1e-38 ~ 3e38
double  2e-308 ~ 1e308
ldouble 3e-4932 ~ 1e4932

PC環境下での最大要素数
    vector<bool> 9e18
    vector<int> 2e18
    vector<long long> 1e18
    deque vectorとほぼ同じ
    set<数> 2e17
    set<string> 1e17
    map<数> 1.9e17
    map<string> 9e16
*/






/*
定数名	値	対応する型と意味
char型	
CHAR_BIT	8	char ビット幅
CHAR_MAX	127	char 最大値（符号無しの場合は 255）※
CHAR_MIN	-128	char 最小値（符号無しの場合は 0）※
SCHAR_MAX	127	signed char 最大値
SCHAR_MIN	-128	signed char 最小値
UCHAR_MAX	255	unsigned char 最大値


short型	
SHRT_MAX	32767	short 最大値
SHRT_MIN	-32768	short 最小値
USHRT_MAX	65535	unsigned short 最大値


int型	
INT_MAX	2147483647	int 最大値
INT_MIN	-2147483648	int 最小値
UINT_MAX	4294967295	unsigned int 最大値


long型（32bit環境、一部の64bit環境（Win64））※	
LONG_MAX	2147483647	long 最大値
LONG_MIN	-2147483648	long 最小値
ULONG_MAX	4294967295	unsigned long 最大値
long型（64bit環境）※	
LONG_MAX	9223372036854758077	long 最大値
LONG_MIN	-9223372036854775808	long 最小値
ULONG_MAX	18446744073709551615	unsigned long 最大値


long long型 ※	
LLONG_MAX	9223372036854775807	long long 最大値
LLONG_MIN	-9223372036854775808	long long 最小値
ULLONG_MAX	18446744073709551615	unsigned long long 最大値


一部の16bit/32bit/64bit環境におけるint/long型の最小値と最大値
定数名	値	対応する型
int型（16bit環境: I16LP32, IP16L32、32bit環境: LP32）
INT_MIN	-32768	int 最小値
INT_MAX	32767	int 最大値
UINT_MAX	65535	unsigned int 最大値
long型（16bit環境、32bit環境: ILP32, LP32、64bit環境: LLP64）
LONG_MIN	-2147483648	long 最小値
LONG_MAX	2147483647	long 最大値
ULONG_MAX	4294967295	unsigned long 最大値
int型（64bit環境: IP64, ILP64, SILP64）
INT_MIN	-9223372036854775808	int 最小値
INT_MAX	9223372036854775807	int 最大値
UINT_MAX	18446744073709551615	unsigned int 最大値


定数名	値	対応する型と意味
float型 / double型 / long double		
FLT_MAX	3.40282e+38	long 最大値
FLT_MIN	1.17549e-38	long 最小値
double型	
DBL_MAX	1.79769e+308	double 最大値
DBL_MIN	2.22507e-308	double 最小値
long double		
LDBL_MAX	1.18973e+4932	long double 最大値
LDBL_MIN	3.3621e-4932	long double 最小値


定数名	値	対応する型と意味
int8_t型	
INT8_MAX	127	int8_t 最大値
INT8_MIN	-128	int8_t 最小値
UINT8_MAX	255	uint8_t 最大値
int16_t型	
INT16_MAX	32767	int16_t 最大値
INT16_MIN	-32768	int16_t 最小値
UINT16_MAX	65535	uint16_t 最大値
int32_t型	
INT32_MAX	2147483647	int32_t 最大値
INT32_MIN	-2147483648	int32_t 最小値
UINT32_MAX	4294967295	uint32_t 最大値
int64_t型	
INT64_MAX	9223372036854775807	int64_t 最大値
INT64_MIN	-9223372036854775808	int64_t 最小値
UINT64_MAX	18446744073709551615	uint64_t 最大値
wchar_t型 ※	
WCHAR_MAX	2147483647	wchar_t 最大値
WCHAR_MIN	-2147483648	wchar_t 最小値
intptr_t型 / uintptr_t型	
INTPTR_MAX	9223372036854775807	intptr_t 最大値
INTPTR_MIN	-9223372036854775808	intptr_t 最小値
UINTPTR_MAX	18446744073709551615	uintptr_t 最大値
*/