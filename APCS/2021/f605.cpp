#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{
    IO
    int n,d; cin >> n >> d;
    int a,b,c,mx,mn;
    int cnt=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        mx = max({a,b,c});
        mn = min({a,b,c});
        if((mx-mn) >= d)
        {
            cnt++;
            sum += (a+b+c)/3;
        }
        
    }
    cout << cnt << " " << sum << endl;
}