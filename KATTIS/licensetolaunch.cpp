#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ep emplace_back

signed main(void)
{
	int n,mn=INT_MAX,ans=0; cin >> n;
    int a[n];
    FOR(i,0,n)
    {
        cin >> a[i];
        if(a[i] < mn)
        {
            mn = a[i];
            ans = i;
        }
    }
    cout << ans << endl;

}
