#include<bits/stdc++.h>
#define IO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
#define FOR(i,n) for(int i=0;i<n;++i)
using namespace std;

signed main(void)
{
  ll x=0,y=0; 
  ll e,s,w,n; cin >> e >> s >> w >> n;
  x += e;
  x -= w;
  y += n;
  y -= s;
  cout << (x == 0 && y == 0 ? "Yes" : "No") << "\n";
}
