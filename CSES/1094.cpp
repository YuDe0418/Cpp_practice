#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define vt(v) vector<int>v;
#define pr(pr) pair<int,int>pr;
#define vtpr(vp) vector<pair<int,int>>vp;
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


signed main(void)
{
    IO
    int n; cin >> n;
    vt(v)
    int x;
    FOR(i,0,n) 
    {
        cin >> x;
        v.emplace_back(x);
    }
    int time = 0;
    FOR(i,0,n-1)
    {
        if(v[i] > v[i+1])
        {
            time += v[i+1] - v[i];
            v[i+1] = v[i];
        }
    }
    cout << abs(time) << endl;
}