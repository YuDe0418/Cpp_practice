#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define all(x) x.begin(),x.end()
#define vi(v) vector<int>v
#define vtn(v,n) vector<int> v(n)
#define input(x) for(auto &i : x) cin >> i
#define pii(pr) pair<int,int>pr
#define vpi(vp) vector<pair<int,int>>vp
#define qu(q) queue<int>q
#define st(s) set<int>s
#define mp(m) map<int,int>m
#define F first
#define S second
#define pb push_back
#define mb emplace_back
#define mp emplace
#define RPT(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,n) for(int i=n;i>=0;i--)
#define seea(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.mb(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define xab(x,a,b) (x ? a : b)
#define read(n) int n; cin >> n
#define ct(n) cout << n << endl
#define int long long

const ll md = 1e9+7;


void solve(){
    int n,m; cin >> n >> m;
    int a[n],b[m];
    input(a); input(b);
    sort(a,a+n); sort(b,b+m);
    int p=0,q=0;
    int ans = abs(a[0]-b[0]);
    while(p<n && q<m)
    {
        ans = min(ans,abs(a[p]-b[q]));
        if(a[p]>b[q]) q++;
        else p++;
    }
    cout << ans << endl;
}

signed main(void){
    IO

    solve();
}