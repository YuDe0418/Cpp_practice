#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define all(x) x.begin(),x.end()
#define vt(v) vector<int>v
#define vtn(v,n) vector<int> v(n)
#define input(x) for(auto &i : x) cin >> i
#define pr(pr) pair<int,int>pr
#define vtp(vp) vector<pair<int,int>>vp
#define qu(q) queue<int>q
#define F first
#define S second
#define pb push_back
#define mb emplace_back
#define mp emplace
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,n) for(int i=n;i>=0;i--)
#define seea(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.mb(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
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
    int a[90010];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int ans=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i] == a[i-1]+1) continue;
        ans+=a[i];
    }
    cout << ans << endl;
}