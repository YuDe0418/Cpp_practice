#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define int long long

const ll md = 1e9+7;

//n<=1e18 使用fastpow
int fp(int x,int y){
    if(y == 0) return 1;
    if(y%2) return fp(x*x%md,y/2)*x%md;
    return fp(x*x%md,y/2);
}




//第一格k種，第二格k-1種，剩下都是k-2種
//故得出 k * k-1 * (k-2)^(n-2)
signed main(void)
{
    IO
    int n,k; cin >> n >> k;
    int ans=0;
    if(n==1) ans = k;
    else if(n==2) ans = (k * (k-1)) % md;
    else ans = (((k * fp(k-2,n-2)) % md) * (k-1)) % md;
    cout << ans << endl;
}