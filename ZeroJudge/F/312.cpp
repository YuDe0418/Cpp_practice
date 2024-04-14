#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i = 0; i <= n; ++i)

int a1,b1,c1,a2,b2,c2,n;
signed main(void)
{
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    int ans = INT_MIN;
    FOR(x1,n)
    {
    	int x2=n-x1;
    	ans=max(ans,a1*x1*x1+b1*x1+c1+a2*x2*x2+b2*x2+c2);
    }
    cout << ans;
}   