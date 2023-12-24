#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,tmp,ans=0; cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        if(tmp <= 10) ans++;
    }
    cout << ans << "\n";
}