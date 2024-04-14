#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v
#define vtn(v,n) vector<int> v(n)
#define input(x) for(auto &i : x) cin >> i
#define pr(pr) pair<int,int>pr
#define vtpr(vp) vector<pair<int,int>>vp
#define qu(q) queue<int>q
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n
#define ct(n) cout << n << endl
#define rt0 return 0
#define ctn continue
#define bk break
#define int long long

const int mod = 1e9 + 7;
ll dp[(int)1e6+5];
vt(c);

//幹你娘完全看不懂

int f(int n,int x)
{
    dp[0] = 1;
    for(int i=0;i<=x;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i - c[j-1] >= 0)
            {
                dp[i] += dp[i - c[j-1]];
                dp[i] %= mod;
            }
        }
    }
    return dp[x];
}

signed main(void)
{
    IO
    int n,x; cin >> n >> x;
    FOR(i,0,n)
    {
        int t; cin >> t;
        c.emplace_back(t);
    }
    ct(f(n,x));
}