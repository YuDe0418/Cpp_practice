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
#define pb push_back
#define mb emplace_back
#define mp emplace
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,n) for(int i=n;i>=0;i--)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define read(n) int n; cin >> n
#define ct(n) cout << n << endl
#define rt0 return 0
#define ctn continue
#define bk break
#define int long long

const ll md = 1e9+7;
signed main(void)
{
    IO
    int n; cin >> n;
    int t,d;
    vector<pair<int,int>> v;
    int sd = n,ans=0;
    for(int i=0;i<n;i++) 
    {
        cin >> t >> d;
        v.push_back(make_pair(t, d));
    }

    //if (!v.empty()) 
    sort(v.begin(), v.end());
    // for(int i=0;i<n;i++) {
    // cout << v[i].first << " " << v[i].second << "\n";
    // }

    for(int i=0;i<n;i++)
    {
        if(sd>=0)
        {
            sd -= v[i].second;
            ans++;
        }
        //if(sd<0) ans--;
    }
    ct(ans);
}