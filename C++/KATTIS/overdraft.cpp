#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

signed main(void)
{
	int n,x; cin >> n;
    int now=0,ans=0;
    while(n--)
    {
        cin >> x;
        now += x;
        if(now < 0 && now < ans) ans = now;

    }
    cout << abs(ans) << endl;
}
