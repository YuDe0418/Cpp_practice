#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int prex,prey; cin >> prex >> prey;
    int mx = INT_MIN,mn = INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        int x,y; cin >> x >> y;
        mx = max(abs(x - prex) + abs(y - prey),mx);
        mn = min(abs(x - prex) + abs(y - prey),mn);
        prex = x;
        prey = y;
    }
    cout << mx << " " << mn << endl;

} 