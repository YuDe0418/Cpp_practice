#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v;
#define pr(pr) pair<int,int>pr;
#define vtpr(vp) vector<pair<int,int>>vp;
#define qu(q) queue<int>q;;
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

//greedy

signed main(void)
{
    IO
    int n,k; cin >> n >> k;
    vt(v)
    FOR(i,0,n) 
    {
        int x; cin >> x;
        v.emplace_back(x);
    }
    int sum = 0;
    sort(v.rbegin(),v.rend());
    FOR(i,0,k) sum += v[i];
    cout << sum << endl;
}