#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

//快速冪
long long int fp(long long int x,long long int y)
{
    //cout << x << " " << y << "\n";
    if(y == 0)return 1;
    if(y%2)return fp(x*x%mod,y/2)*x%mod;
    return fp(x*x%mod,y/2);
}

//模倒數 inversion mod
//i^(mod - 2) % mod
//inv[i]= (mod - (mod / i) * inv[mod % i]) % mod(不推薦使用)
int inv(int x){
    return fp(x,mod-2);
}

signed main(void)
{
    cout << fp(2,10000000); 
}