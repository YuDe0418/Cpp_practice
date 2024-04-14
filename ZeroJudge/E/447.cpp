#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
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
#define int long long
/*
int idx = 0;

void sol(int k)
{
    vt(v)
    if(k == 1)
    {
        int x; cin >> x;
        v.emplace_back(x);
    }
    else if(k == 2)
    {
        if(v.empty()) cout << -1 << endl;
        else cout << v[0] << endl;
    }
    else if(K == 3)
    {
        if(v.empty()) continue;
        else
    }
}
*/

signed main(void)
{
    IO
    queue<int>q;
    int n,k; cin >> n;

    while(n--)
    {
        cin >> k;
        if(k == 1)
        {
            int x; cin >> x;
            q.emplace(x);
        }
        else if(k == 2) 
        {
            if(q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
        }
        else 
        {
            if(q.empty()) continue;
            else q.pop();
        }
    }

}