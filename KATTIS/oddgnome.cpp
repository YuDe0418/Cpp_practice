#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

signed main(void)
{
	int n,m,x,p; cin >> n;
    int ans;
    FOR(i,0,n)
    {
        
        ans = -1;
        cin >> m;
        FOR(j,0,m)
        {
            cin >> x;
            if(j == 0 || j == n-1 || ans != -1) 
            {
                p = x;
                continue;
            }

            if((x - p) != 1)
            {
                ans = j+1;
            }
            p = x;
        }
        cout << ans << endl;
    }

}
