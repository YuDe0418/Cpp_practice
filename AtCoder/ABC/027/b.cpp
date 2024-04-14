#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int> v
#define vtn(v,n) vector<int> v(n)
#define pr(pr) pair<int,int>pr
#define vtpr(vp) vector<pair<int,int>> vp
#define input(x) for(auto &i : x) cin >> i
#define qu(q) queue<int> q;
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n;
#define ct(n) cout << n << endl;
#define rt0 return 0;
#define ctn continue;
#define bk break;
#define int long long


signed main(void)
{
    IO
    int n,x; cin >> n >> x;
    vtn(v,n);
    input(v);
    sort(v.begin(),v.end());
    int ans=0,sum=0;
    for(auto &i : v)
    {
        if((ans + 1 == n) && (x - sum != i)) break; // last one

        if(sum + i <= x)
        {
            sum += i;
            ans++;
        }
        else break;
    }
    ct(ans)
}