#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int ans = 0,ipt;
    for(int i=0;i<n;i++)
    {
        cin >> ipt;
        ans += ipt - 1;
    }
    cout << ans + 1 << endl;
} 

