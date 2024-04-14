#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int n,m; cin >> n >> m;
    int t,sum=0,ans=0,k=m;
    while(m--)
    {
        cin >> t;
        if(n - sum >= t)
        {
            ans++;
            sum+=t;
        }

    }
    cout << k - ans << endl;
}