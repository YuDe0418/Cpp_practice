#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define int long long
signed main(void)
{
    IO
    int n; cin >> n;
    vector<int> v;
    int ans = INT_MAX;
    int x;
    FOR(i,0,n)
    {
        cin >> x;
        v.emplace_back(x);
    }
    FOR(i,0,(1 << n))
    {
        int a=0,b=0;
        FOR(j,0,n)
        {
            if(i & (1 << j)) a += v[j];
            else b += v[j];
        }
        ans = min(ans,abs(a-b));
    }
    cout << ans << endl;
}