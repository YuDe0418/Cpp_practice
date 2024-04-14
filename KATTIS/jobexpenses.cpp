#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

signed main(void)
{
	int n; cin >> n;
    vector<int>v;
    int ans=0,x;
    FOR(i,0,n)
    {
        cin >> x;
        v.emplace_back(x);
    }
    FOR(i,0,n)
    {
        if(v[i]<0) ans +=v[i];
    }
    cout << abs(ans) << endl;
}
