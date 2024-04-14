#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    long long a,b,ans;
    while(n--)
    {
        cin >> a >> b;
        ans = a;
        for(int i=1;i<b;i++)
        {
            ans *= a;
        }
        cout << ans << endl;
    }
} 

