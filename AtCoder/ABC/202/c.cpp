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
    vector<int> a(n); input(a);
    //存第二排每個元素對應的位置
    map<int,vector<int>> mv;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x; 
        mv[x].mb(i+1);
    }
    //存第二行每個數字在第三行有幾個
    vector<int> b(n+1,0); 
    FOR(i,0,n)
    {
        cin >> x;
        b[x]++;
    }
    int ans=0;
    //存第一行每個數字在第二行有幾個
    vector<int> c(n+1,-1);
    FOR(i,0,n)
    {
        if(c[a[i]] != -1) 
        {
            ans += c[a[i]]+1;
            continue;
        }
        FOR(j,0,mv[a[i]].size())
        {
            ans += b[mv[a[i]][j]];
            c[a[i]] += b[mv[a[i]][j]];
        }
    }
    ct(ans);
    
}