#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod = 1e9+7;

//快速冪 將指數部分以二分的方式處理
int fp(int x,int y)
{
    //cout << x << " " << y << "\n";
    if(y == 0)return 1;
    if(y%2)return fp(x*x%mod,y/2)*x%mod;
    return fp(x*x%mod,y/2);
}

// 快速冪 折半
int fastp(int a, int b)
{
	if (b == 0) return 1;
    if (b%2 != 0) return fastp(a,b-1) * a;
    int t = fastp(a,b/2);
    return t * t;
}

//模倒數 inversion mod
//i^(mod - 2) % mod
//inv[i]= (mod - (mod / i) * inv[mod % i]) % mod(不推薦使用)
int inv(int x){
    return fp1(x,mod-2)/*fp2(x,mod-2)*/;
}
