#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    for(int i=0;i<n;i++)
    {
        long long p,r,f,ans=0;
        cin >> p >> r >> f;
        while(p <= f)
        {
            p *= r;
            ans++;
        }
        cout << ans << endl;
    }
} 

